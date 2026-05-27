// week14-1 好玩的打地鼠
// 接續 week12-1 圖+cos() sin()  week11-1 陣列 的程式
PImage img; // 外面宣告變數(可讓別人裡面使用)
void setup() { // 設定
  size(300, 400); // 視窗大小
  img = loadImage("gopher.png"); // 把 gopher.png 圖檔 拉到程式裡
}
int [][] a = { {0,0,0}, {0,0,0}, {0,0,0} }; // 地鼠有沒有冒起來
void draw() {
  background(0xFFFFFFF2); // 淡黃色背景
  if (frameCount%60==0) { // 每 60 frames (1秒) 冒出一隻地鼠
    int i = int(random(3)), j = int(random(3)); // 亂數決定 i j 的值
    a[i][j] = 60; // 會亂數決定1格, 站起來 60 frames (1秒)
  }
  for (int i=0; i<3; i++) { // 左手i
    for (int j=0; j<3; j++) { // 右手j
      float x = j*100, y = i*100+100; // 推算座標, 小心 y往下100(藏白色板後)
      //if (i==0 && j==0)  y += mouseY; // 暫時實驗用的,看到畫面壞了
      if (a[i][j]>0) { // 如果有地鼠
        a[i][j] -= 1; // 生命的倒數計時
        y -= 100*sin(a[i][j]*PI/60); // 小心 y 對應 sin()
      }
      image(img, x, y, 100, 100);
    }
    rect(0, 100+i*100, 300, 100); // 低一格的地方, 放長方形擋住
  }
}
