#include<stdio.h>
#include<string.h>
int jump_floor(int n)//������쳲��������У��������һ��ʱ����������������n-1��n-2����
{

    if (n < 3)
    {
        return n;
    }

    else
    {
        return n = jump_floor(n - 1) + jump_floor(n - 2);
    }
}

int main()
{
    int m = 0;
    int n = 0;
    printf("������̨������");
    scanf("%d", &n);
    m = jump_floor(n);
    printf("һ����%d������\n", m);
    return 0;
}