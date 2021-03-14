#include <stdio.h>
void my_strcpy(char *dest, char *src)
{
    while (*dest++ = *src++)//当传输到\0时，ASCII的值为0，结束循环
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