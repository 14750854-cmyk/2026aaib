//week07-2 好玩的程式設計 黑白棋
//file-Preference 設大字形
void setup() {
  size(620, 620); // 視窗大小 600+20 x 600+20
}

int [][] board = new int[10][10]; // Java 的陣列

void mousePressed() {
  int i = (mouseY - 10) / 60, j = (mouseX - 10) / 60;
  if (mouseButton == LEFT) {
    board[i][j] = 1; // 放黑子
  } else if (mouseButton == RIGHT) {
    board[i][j] = 2; // 放白子
  }
}

void draw() {
  background(245, 216, 142); // 木板色
  for (int i=0; i<10; i++) { // 左手 i (跟y有關)
    for (int j=0; j<10; j++) { // 右手 j (跟x有關)
      int x = 10 + j * 60, y = 10 + i * 60;
      fill(245, 216, 142); // 木板色
      strokeWeight(2); // 畫線的粗細 2
      rect(x, y, 60, 60); // 每個格子 60x60

      if (board[i][j] == 1) {
        fill(0); // 黑色
        ellipse(40 + j * 60, 40 + i * 60, 50, 50);
      } else if (board[i][j] == 2) {
        fill(255); // 白色
        ellipse(40 + j * 60, 40 + i * 60, 50, 50);
      }
    }
  }
}
