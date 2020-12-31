#include<stdio.h>
int main()
{
    int a = 1;
    int n = 1;
    while (n <= 4)
    {
        a = a * n;
        n++;
    }
    printf("a =%d\n", a);
    return 0;
}