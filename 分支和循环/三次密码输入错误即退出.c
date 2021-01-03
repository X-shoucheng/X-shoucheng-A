#include<stdio.h>

int main()
{
    int i = 0;
    char password[20] = {0};
    for (i = 0; i < 3;i++)
    {
        printf("请输入密码：");
        scanf("%s", password);
        if (strcmp(password, "123456") == 0) //等号不能用来判断字符串是否相等，需要strcmp
        {
            printf("success\n");
            break;
            }
            else
            {
                printf("failed\n");
            }
    }
    if(i == 3)
    {
        printf("exit\n");
    }
    return 0;
}