#include <stdio.h>
#include<assert.h>
void my_strcpy(char *dest, char *src)
{
    assert(dest != NULL); //断言,当括号里条件为假时，报错
    assert(src != NULL);
    while (*dest++ = *src++)
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