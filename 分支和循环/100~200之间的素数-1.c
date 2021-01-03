#include <Windows.h>
#include <stdio.h>
#include <string.h>
int main()                                        //试除法
{
    int i = 0;
    int count = 0;
    for (i = 100; i <= 200; i++)
    {
        int j = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)                        //当2~i-1之间有数可以作i的约数，说明i不是素数
            {
                break;
            }
        }
        if (j == i)                                   //此时2~i-1之间没有数可以作i的约数，说明i是素数
            count++;
        printf("%d ", i);
    }
    printf("\ncount = %d\n", count);  //计数
    return 0;
}