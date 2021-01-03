#include <Windows.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    for (i = 0; i <= 100; i++)
    {
        if (i % 3 == 0)
            printf("%d ", i);
    }
    return 0;
}