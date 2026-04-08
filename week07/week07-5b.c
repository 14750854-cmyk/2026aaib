// week07-5b.cpp SOIT107_Base_009
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N > 2) printf("%d", N - 2);
    else printf("%d", 2 - N);
}
