// week15-2b.cpp SOIT106_ADVANCE_011
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a = N/1000;
    int b = N/100 %10;
    int c = N/10 %10;
    int d = N%10;
    printf("%d\n", a*8+b*4+c*2+d);
}
