#include <Windows.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        i = b;
    }
    else
    {
        i = a;
    }
    while (a % i != 0 || b % i != 0)
    {
        i--;
    }
    printf("%d\n", i);
    return 0;
}