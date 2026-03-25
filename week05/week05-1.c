///week05-1.cpp練習陣列
#include <stdio.h>
int main()
{
    int a[4] = {10, 20, 30, 40};
    a[2] = 999;///把[a]的質改放999

    for (int i=0; i<4; i++) {
        printf("%d ", a[i]);
    }
}
