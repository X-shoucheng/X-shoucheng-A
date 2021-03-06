#include <stdio.h>
int count_bit_one(unsigned int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
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