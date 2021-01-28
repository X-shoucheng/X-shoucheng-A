#include<stdio.h>
int main()
{
    int num = 0;
    int count = 0;
    int i = 0;
    scanf("%d", &num);
    for (i = 0; i < 32; i++)//数值和1进行按位与，并不断右移，判断每一位与1的结果
    {
        if (1 == ((num >> i) & 1))
        {
            count++;
        }
    }
    printf("%d\n", count);
}