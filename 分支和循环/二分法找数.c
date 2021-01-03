#include<stdio.h>
#include<string.h>
int main()
{
    int k = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int sz = sizeof(arr) / sizeof(arr[0]);              //计算数组长度
    int left = 0;
    int right = sz - 1;
    scanf("%d", &k);                                         //需要先把k设好，不能直接接受k

    while (left <= right)                                    //说明有元素可以找 
    {
        int mid = (left + right) / 2;                     //二分法具体过程
        if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            printf("找到了，下表是：％d\n", mid);
            break;
        }
    }
    if (left > right)                                                   //左右错位，说明找不到
    {
        printf("找不到\n");
    }
    return 0;
}