#include <stdio.h>
#include <assert.h>
char* my_strcpy(char *dest, char *src)
{
    char* ret = dest;
    assert(dest != NULL); //����,������������Ϊ��ʱ������
    assert(src != NULL);
    while (*dest++ = *src++)
    {
        ;
    }
    return ret;//��������ֱ�Ӵ�ӡ����ֵ����ʽ����
}
int main()
{
    char arr1[] = "##########";
    char arr2[] = "bit";
    my_strcpy(arr1, arr2);
    printf("%s\n", arr1);
    return 0;
}