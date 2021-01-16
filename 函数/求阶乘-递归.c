#include<stdio.h>
int Fac2(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * Fac2(n - 1);
}
int main()
{
    int n = 0;
    int ret = 0;
    scanf("%d", &n);
    ret = Fac2(n);
    printf("%d\n", ret);
    return 0;
}