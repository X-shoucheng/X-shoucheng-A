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
int get_diff_bit(int m, int n)
{
    int tmp = m ^ n;
    return count_bit_one(tmp);
}
int main()
{
    int n = 0;
    int m = 0;
    int count = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    count = get_diff_bit(n, m);
    printf("count = %d\n", count);
    return 0;
}