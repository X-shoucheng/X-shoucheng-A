//电脑会生成一个随机数 
//猜数后，电脑告诉比随机数是大还是小
// 猜中后，继续再来一把
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void menu()
{
    printf("**********猜数字*************\n");
    printf("****1.play **** 0.exit*******\n");
    printf("*****************************\n");
}
void game()
{
    int ret = 0;
    int guess = 0;
    ret = rand() % 100 + 1; //生成随机数，范围1~100
                                          //%100，余数一定在1~99之间，用来缩小rand的范围
                                          //不能加到while里面，不然每输入一个数后，随机数就变了
    while (1)
    {
        printf("请猜数字：");
        scanf("%d", &guess); //接受猜的数字
        if (guess > ret)
        {
            printf("没有那么大哦\n");
        }
        else
        {
            if (guess < ret)
            {
                printf("没有那么小哦\n"); //大小逻辑不能错误
            }
            else
            {
                printf("恭喜你，猜中了！\n");
                break;
            }
        }
    }
}
int main()
{
    int input = 0;
    srand((unsigned int)time(NULL)); //拿时间戳设置随机数的生成起点,
                                     //工程里只要调用一次就可以，设置在主函数开始后
    do
    {
        menu();
        printf("请选择：");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }

    } while (input); //当输入0，退出循环，否则回到菜单
    return 0;
}