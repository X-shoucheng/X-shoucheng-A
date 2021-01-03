#include <Windows.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int max = 0;
    int mid = 0;
    int min = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a >= b && b >= c)
    {
        max = a;
        mid = b;
        min = c;
    }
    if (a >= c && c >= b)
    {
        max = a;
        mid = c;
        min = b;
    }
    if (b >= a && a >= c)
    {
        max = b;
        mid = a;
        min = c;
    }
    if (b >= c && c >= b)
    {
        max = b;
        mid = c;
        min = a;
    }
    if (c >= b && b >= a)
    {
        max = c;
        mid = b;
        min = a;
    }
    if (c >= a && a >= b)
    {
        max = c;
        mid = a;
        min = b;
    }
    printf("%d > %d > %d\n", max, mid, min);

    return 0;
}