#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    char input[20] = {0};
    system("shutdown -s -t 60"); //系统命令，60s内关机
again:
    printf("请注意，您的电脑将在一分钟内关机\n");
    printf("除非输入：我是猪\n");
    printf("请输入：");
    scanf("%s", &input);
    if (strcmp(input, "我是猪") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}