#include <Windows.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0)
        {
            printf("%d \n", i);
        }
        i++;
    }
    return 0;
}