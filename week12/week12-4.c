/// week12-4.cpp 最大公因數
/// ex. 51/68 可約分成為 3/4 因為最大公因數17
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int ans = 1; /// 1一定可以整除
    for (int i = 1; i <= a; i++) { /// 把 1...a 全試過
        if ( a % i == 0 && b % i == 0 ) ans = i;
        /// 如果i可以整除a 也可以整除b，就是(目前的)最大公因數
    }

    printf("%d", ans); /// 補上輸出結果
    return 0;
}
