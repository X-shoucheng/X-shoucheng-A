#include<stdio.h>
void bubble_sort(int arr[], int se)
{
    int i = 0;
    for (i = 0; i < se - 1; i++) //�����������Ԫ����-1
    {
        int j = 0;
        int flag = 1;//�趨�ж������ֵ
        for (j = 0; j < se - 1; j++)//��ÿһ�˵�ÿ��Ԫ�ؽ�������
        {
            if (arr[j] > arr[j + 1])//�����ߴ����ұߣ��͵���λ��
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flag = 0;//�������ֵ�������͵�Ϊ0
            }
        }
        if(flag==1)
        {
            break;//��û����ֵ����ʱ��˵���Ѿ��ź��򣬿���ֱ������ѭ��
        }
    }
}
int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};//���������Ϊ����
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);//��������������ܷ����Զ��庯�����棬arr�����Զ��庯�����������Ԫ�ص�ַ
    bubble_sort(arr, sz);
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);//��ӡ�����������
    }
    return 0;
}