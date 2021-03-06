#include <stdio.h>
int count_bit_one(unsigned int n)
{
    int count = 0;
    int i = 0;
    for (i = 0; i < 32; i++)
    {
        if (((n >> i) & 1) == 1)//将n和1进行按位与，最后一位是1就计数加一，然后n向右移一位
        {
            count++;
        }
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