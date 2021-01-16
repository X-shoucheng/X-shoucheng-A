#include<stdio.h>
void print(int n)
{
    if (n > 9)
    {
        print(n / 10);     //¿ªÊ¼µÝ¹é
    }
    printf("%d ", n % 10);
}
int main()
{
    unsigned int num = 0;
    scanf("%d", &num);
    print(num);
    return 0;
}