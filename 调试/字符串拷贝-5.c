#include <stdio.h>
#include <assert.h>
char* my_strcpy(char *dest, char *src)
{
    char* ret = dest;
    assert(dest != NULL); //断言,当括号里条件为假时，报错
    assert(src != NULL);
    while (*dest++ = *src++)
    {
        ;
    }
    return ret;//这样可以直接打印返回值，链式访问
}
int main()
{
    char arr1[] = "##########";
    char arr2[] = "bit";
    my_strcpy(arr1, arr2);
    printf("%s\n", arr1);
    return 0;
}