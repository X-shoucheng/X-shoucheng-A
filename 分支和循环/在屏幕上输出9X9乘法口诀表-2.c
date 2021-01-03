#include <Windows.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    int j = 0;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%-2d ", i, j, i*j);  //用%-2d保持左对齐
        }
        printf("\n");
    }
    return 0;
}