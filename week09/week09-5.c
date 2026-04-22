/// week09-5.cpp 想要更了解大到小排序
#include <stdio.h>
int main()
{
    /// 陣列有10個數字
    int a[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 97};

    for (int i=0; i<10; i++) printf("%d ", a[i]); /// 擠一行
    printf("\n"); /// 跳行

    for (int i=0; i<10-1; i++) { /// 小心，i < 10-1 的「-1」減1
        if ( a[i] < a[i+1] ) { /// 希望左大、右小，但現在「反過來」
            int temp = a[i]; /// 就交換
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    /// 再把陣列印一次，發現最小的 11 移到最右邊
    for (int i=0; i<10; i++) printf("%d ", a[i]); /// 擠一行
    printf("\n"); /// 跳行
}
