#include<stdio.h>
int Fib(int n)//n太大，结果可能会溢出
{
    int a = 1;
    int b = 1;
    int c = 1;

    while (n > 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
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