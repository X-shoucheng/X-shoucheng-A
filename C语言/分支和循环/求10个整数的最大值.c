#include <Windows.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int arr[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    int max = arr[0];                            //将数组中的一个数作为开始，不用0，避免0是最大的
    int sz = 0;
    int i = 0;
    sz = sizeof(arr) / sizeof(arr[0]);
    for (i = 1; i <= 9; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("max =%d\n", max);
    return 0;
}