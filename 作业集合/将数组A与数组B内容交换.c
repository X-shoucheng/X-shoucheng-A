#include <stdio.h>
void Print(int arr[], int sz)//��ӡ����ĺ���
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
    printf("\n");//��ӡ����������
    int tmp = 0;
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }//���ν��������ÿһ��Ԫ��
    Print(arr1, sz);
    Print(arr2, sz);//��ӡ�����������
    return 0;
}