#include<stdio.h>
int Fac1(int n)
{
    int i = 0;
    int ret = 1;
    for (i = 1; i <= n; i++)
    {
        ret *= i;
    }
    return ret;
}
int main()
{
    int n = 0;
    int ret = 0;
    scanf("%d", &n);
    ret = Fac1(n);
    printf("%d\n", ret);
    return 0;
}