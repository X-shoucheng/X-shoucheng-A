#include <stdio.h>
void Init(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        arr[i] = 0;
    }
}
void Print(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void Reverse(int arr[], int sz)
{
    int left = 0;
    int right = sz - 1;
    while (left < right)
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    //Init(arr,sz);//数组初始化为0
    Print(arr, sz);
    Reverse(arr, sz);//数组反转
    Print(arr, sz); //打印数组
    return 0;
}