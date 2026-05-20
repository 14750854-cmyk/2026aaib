// 接續 week12-1 week11-1 程式
PImage img; // 外面宣告變數(可讓別人生面使用)
void setup() {
  size(300, 300); // 視窗大小
  img = loadImage("gopher.png"); // 把 gopher.png 圖檔 拉到程式裡
}
int [][]a = { {0,0,0}, {0,0,0}, {0,0,0} }; // 地鼠有沒有冒起來
void draw() {
  background(#FFFFF2); // 淡黃色背景
  if (frameCount%60==0) { // 每 60 frames (1秒) 冒出一隻地鼠
    int i = int(random(3)), j = int(random(3));
    a[i][j] = 60; // 會站起來 60 frames (1秒)
  }
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      float x = j*100, y = i*100+100;
      //if (i==0 && j==0) y += mouseY; // 暫時實驗用的，看到畫面壞了
      if (a[i][j]>0) {
        a[i][j] -= 1; // 生命的倒數計時
        y -= 100*sin(a[i][j]*PI/60);
      }
      image(img, x, y, 100, 100);
    }
    rect(0, 100+i*100, 300, 100); // 低一格的地方，放長方形擋住
  }
}
