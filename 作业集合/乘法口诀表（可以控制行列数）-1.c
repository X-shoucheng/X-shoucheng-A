#include <stdio.h>
int main()
{
    int m = 0;
    scanf("%d", &m);
    int i = 0;
    int j = 0;
    if (m >= 1)
    {
        for (i = 1; i <= m; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d * %d = %d  ", i, j, i * j);
            }
            printf("\n");
        }
    }
    else
    {
        printf("ÊäÈë´íÎó£¡");
    }
    return 0;
}