#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
int main() //如果i=a*b，那么a、b中至少有一个小于i的开平方
{
    int i = 0;
    int count = 0;
    for (i = 101; i <= 200; i+=2)//从奇数开始，用i+2排除偶数
    {
        int j = 0;
        for (j = 2; j < sqrt(i); j++) //sqrt-开平方,需要math库
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j > sqrt(i))
        {
            count++;
            printf("%d ", i);
        }
    }
    printf("\ncount = %d\n", count);
    return 0;
}