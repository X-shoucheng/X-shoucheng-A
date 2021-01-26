#include<stdio.h>
#include<string.h>
int jump_floor(int n)//类似于斐布拉切数列，跳到最后一阶时，有两种跳法，从n-1或n-2跳上
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
    printf("请输入台阶数：");
    scanf("%d", &n);
    m = jump_floor(n);
    printf("一共有%d种跳法\n", m);
    return 0;
}