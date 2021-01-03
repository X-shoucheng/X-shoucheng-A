
#include <Windows.h>
#include <stdio.h>
#include <string.h>
int main()                                       //辗转相除法
{
    int a = 0;
    int b = 0;
    int r = 0;
    int tem = 0;
    scanf("%d %d", &a, &b);

    if (b > a)
    {
        tem = b;
        b = a;
        a = tem;
    }
    while (r  = a % b)
    {
        a = b;
        b = r;
    }
    printf("%d\n", b);

    return 0;
}