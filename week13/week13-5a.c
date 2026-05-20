// week13-5c.cpp SOIT106_ADVANCE
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ans = 0;
    while (N>0) {
        ans = ans * 10 + N%10;
        N = N / 10;
    }
    printf("%d\n", ans);
}
