#include<stdio.h>
int is_prime(int n)
{
    int j = 0;
    for (j = 2; j <= sqrt(n); j++)
    {
        if (n % j == 0)
            return 0; //return 0 �ı�break��ǿ������ֱ�ӽ���
    }
    return 1; //forѭ��������ʱ��j=n���Ѿ�˵��n������������ֱ�����n
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