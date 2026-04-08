// week07-5d.cpp SOIT107_Base_012
#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z') printf("U");
    else if (c >= 'a' && c <= 'z') printf("L");
    else if (c >= '0' && c <= '9') printf("D");
    else printf("O");
}
