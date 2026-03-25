// week05-5 好玩的程式設計
int [] b = {0, 0, 0, 0, 0, 0, 0};
void setup() {
    size(700, 100);
}

void draw() {
    for (int i=0; i<7; i++) {
        if (b[i] == 0) {
            fill(#FFFFF2); // 淡黃色
            rect( i*100, 0, 100, 100);
        } else {
            fill(#F5CBFF); // 淡紫色/粉藍色
            rect( i*100, 0, 100, 100);
        }
    }
}

void mousePressed() {
    int i = mouseX / 100;
    if (b[i] == 0) b[i] = 1;
    else b[i] = 0;
}
