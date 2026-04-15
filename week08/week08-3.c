// week08-3 會飛的氣球
// 修改自 week08-2 會跟著 mouse 移動的氣球
void setup() {
  size(500, 500); // 視窗大小
  img = loadImage("balloon.png"); // 讀入圖片
}

PImage img; // 圖片宣告 (要再拉一次 balloon.png 到程式裡)
float x, y; // 變數宣告
float s = 0.1; // 氣球的大小 (縮放比例)
void draw() {
  background(255); // 白色背景
  if (mousePressed) {
    s *= 1.1; // 氣球越乘越大
    image(img, mouseX-(96*s)/2, mouseY-(132*s), 96*s, 132*s);
  } else {
    image(img, x, y, 96*s, 132*s); // 照著座標畫氣球
    y--; // 讓氣球往上飄
  }
}
// 注意，要再拉一次 balloon.png 到程式裡

void mouseReleased() {
  x = mouseX-(96*s)/2; // x座標 (變數設定)
  y = mouseY-(132*s); // y座標
}
