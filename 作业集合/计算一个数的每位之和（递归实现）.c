#include <stdio.h>
int Digitsum(unsigned int num)
{
    if (num > 9)
    {
        return Digitsum(num / 10) + num % 10;
    }
    else
    {
        return num;
    }
}
int main()
{
    unsigned int num = 0;
    scanf("%d", &num);
    int ret = Digitsum(num);
    printf("%d\n", ret);
    return 0;
}