#include<stdio.h>
int main()
{
    int num = 0;
    int count = 0;
    int i = 0;
    scanf("%d", &num);
    for (i = 0; i < 32; i++)//��ֵ��1���а�λ�룬���������ƣ��ж�ÿһλ��1�Ľ��
    {
        if (1 == ((num >> i) & 1))
        {
            count++;
        }
    }
    printf("%d\n", count);
}