#include<stdio.h>
int Fib(int n)//计算量太大，不合适，会重复计算
{
    if (n <= 2)
        return 1;
    else
        return Fib(n - 1) + Fib(n - 2);
}

int main()
{
    int n = 0;
    int ret = 0;
    scanf("%d", &n);
    ret = Fib(n);
    printf("ret = %d\n", ret);
    return 0;
}