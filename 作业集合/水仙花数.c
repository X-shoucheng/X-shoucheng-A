#include <stdio.h>
int main()
{
    int i = 100;
    int sum = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    while (i <= 999)
    {
        a = (i % 10);
        b = ((i / 10) % 10);
        c = (i / 100);
        sum = a * a * a + b * b * b + c * c * c;
        if (sum == i)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}