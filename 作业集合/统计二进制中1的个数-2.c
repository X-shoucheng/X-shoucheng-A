#include <stdio.h>
int count_bit_one(unsigned int n)
{
    int count = 0;
    int i = 0;
    for (i = 0; i < 32; i++)
    {
        if (((n >> i) & 1) == 1)//��n��1���а�λ�룬���һλ��1�ͼ�����һ��Ȼ��n������һλ
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