#include <stdio.h>
void my_strcpy(char *dest, char *src)
{
    while (*dest++ = *src++)//�����䵽\0ʱ��ASCII��ֵΪ0������ѭ��
    {
        ;
    }
}
int main()
{
    char arr1[] = "##########";
    char arr2[] = "bit";
    my_strcpy(arr1, arr2);
    printf("%s\n", arr1);
    return 0;
}