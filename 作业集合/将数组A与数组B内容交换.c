#include <stdio.h>
void Print(int arr[], int sz)//打印数组的函数
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int sz = sizeof(arr1) / sizeof(arr1[0]);
    Print(arr1, sz);
    Print(arr2, sz);
    printf("\n");//打印本来的数组
    int tmp = 0;
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }//依次交换数组的每一个元素
    Print(arr1, sz);
    Print(arr2, sz);//打印交换后的数组
    return 0;
}