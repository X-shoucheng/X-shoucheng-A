#include <Windows.h> 
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    int j = 0;
    int mul = 0;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            mul = i * j;
            printf("%d*%d=%d", j, i, mul);
        }
        printf("\n");
    }
    return 0;
}