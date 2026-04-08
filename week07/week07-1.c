// week07-1 好玩的程式設計 黑白棋 (互動)
// File-Preference 設大字型
size(620, 620); // 視窗大小 600+20 x 600+20
background(245, 216, 142); // 木板色
for (int i=0; i<10; i++) { // 左手 i (跟y有關)
  for (int j=0; j<10; j++) { // 右手 j (跟x有關)
    int x = 10 + j * 60, y = 10 + i * 60;
    fill(245, 216, 142); // 木板色
    strokeWeight(2); // 畫線的粗細 2
    rect(x, y, 60, 60); // 每個格子 60x60
  }
}
