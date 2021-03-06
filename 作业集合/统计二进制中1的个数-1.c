#include <stdio.h>
int count_bit_one(unsigned int n)//把输入的n转化为无符号数，以应对负数
{
    int count = 0;
    while (n)
    {
        if (n % 2 == 1)
        {
            count++;
        }
        n = n / 2;
    }
    return count;
}
int main()
{
    int a = 0;
    scanf("%d", &a);
    int count = count_bit_one(a);
    printf("count = %d\n", count);
    return 0;
}