// 1. 必須在全域宣告二維陣列，代表 3x3 的格子
int[][] a = new int[3][3];

void setup() {
  size(300, 300); // 設定視窗大小
}

void mousePressed() { // 當滑鼠按下去時
  // 檢查座標是否在陣列索引範圍內 (0-2)
  int i = mouseY / 100;
  int j = mouseX / 100;

  // 防止陣列越界（點到視窗邊緣可能會超出 0-2）
  if (i >= 0 && i < 3 && j >= 0 && j < 3) {
    if (a[i][j] > 0) { // 如果該位置有地鼠 (正值)
      a[i][j] = -60;   // 設定為負值，進入「流血死掉」狀態
    }
  }
}

void draw() {
  background(#FFFFF2); // 背景淡黃色

  // 每秒（60 frame）隨機生出一隻地鼠
  if (frameCount % 60 == 0) {
    int i = int(random(3));
    int j = int(random(3));
    a[i][j] = 60; // 將該位置設為 60 (代表地鼠出現的倒數時間/透明度)
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int x = 50 + j * 100;
      int y = 50 + i * 100;

      if (a[i][j] < 0) {
        // 狀態 A：負值代表被打到，顯示紅色血跡
        fill(255, 0, 0);
        a[i][j]++; // 數值慢慢從 -60 加回 0，血跡就會消失
      }
      else if (a[i][j] > 0) {
        // 狀態 B：正值代表地鼠活著，顏色隨數值變淡
        // a[i][j]*4 用來當作 alpha 值 (0-255)，所以 60*4 = 240
        fill(#C61616, a[i][j] * 4);
        a[i][j]--; // 地鼠慢慢消失
      }
      else {
        // 狀態 C：值為 0 代表空洞
        fill(#FFFFF2);
      }

      ellipse(x, y, 90, 90); // 畫出地鼠或洞
    }
  }
}
