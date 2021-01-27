#include<stdio.h>
void bubble_sort(int arr[], int se)
{
    int i = 0;
    for (i = 0; i < se - 1; i++) //排序的趟数，元素数-1
    {
        int j = 0;
        int flag = 1;//设定判断排序的值
        for (j = 0; j < se - 1; j++)//对每一趟的每个元素进行排序
        {
            if (arr[j] > arr[j + 1])//如果左边大于右边，就调换位置
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flag = 0;//如果有数值调换，就调为0
            }
        }
        if(flag==1)
        {
            break;//在没有数值调换时，说明已经排好序，可以直接跳出循环
        }
    }
}
int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};//输入的数组为降序
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);//求数组个数，不能放在自定义函数里面，arr传到自定义函数里面的是首元素地址
    bubble_sort(arr, sz);
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);//打印调整后的数组
    }
    return 0;
}