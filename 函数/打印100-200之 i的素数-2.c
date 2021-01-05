#include<stdio.h>
int is_prime(int n)
{
    int j = 0;
    for (j = 2; j <= sqrt(n); j++)
    {
        if (n % j == 0)
            return 0; //return 0 的比break更强，代码直接结束
    }
    return 1; //for循环出来的时候，j=n，已经说明n是素数，可以直接输出n
}
int main()
{
    int i = 0;
    for (i = 100; i <= 99999; i++)
    {
        if (is_prime(i) == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}