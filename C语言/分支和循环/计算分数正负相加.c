//计算1/1-1/2+1/3-1/4+1/5 ....+ 1/99-1/100的值
#include <Windows.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    double sum = 0.0;
    int flag = 1;
    for (i = 1; i <= 100; i++)
    {
        sum += flag * 1.0 / i;
        flag = -flag;
    }
    printf("sum = %lf\n", sum);
    return 0;
}