//运行的主程序
#include "game.h"
void menu() //游戏进入菜单
{
    printf("*********************\n");
    printf("***1-play***0-exit***\n");
    printf("*********************\n");
}
void game() //游戏的算法
{
    char ret = 0;//ret用来判断游戏的进程
    char board[ROW][COL] = {0};    //棋盘数组首先归零
    InitBoard(board, ROW, COL);    //初始化棋盘
    DisplayBoard(board, ROW, COL); //打印棋盘
    //下棋
    while (1)//循环一直开启，除非break
    {
        PlayerMove(board, ROW, COL);//玩家下棋
        DisplayBoard(board, ROW, COL);//打印棋盘
        ret = IsWin(board, ROW, COL); //判断玩家输赢
        if (ret != 'C')
        {
            break;
        }
        ComputerMove(board, ROW, COL); //电脑下棋
        DisplayBoard(board, ROW, COL);//打印棋盘
        ret = IsWin(board, ROW, COL); //判断电脑输赢
        if (ret != 'C')
        {
            break;
        }
    }
    if (ret == '*')
    {
        printf("玩家赢！\n");
    }
    if (ret == 'o')
    {
        printf("电脑赢...\n");
    }
    if (ret == 'C')
    {
        printf("平局\n");
    }
}
void test()
{
    int input = 0;
    srand((unsigned int)time(NULL));//建立随机数，以时间为随机数种子
    do
    {
        menu();//首先打印游戏进入菜单
        printf("请选择：");
        scanf("%d", &input);
        switch (input)//输入1，进入case1；输入0，进入case2；输入其他，进入default
        {
        case 1:
            game();//进入游戏
            break;
        case 2:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误，请重新选择！\n");
            break;
        }
    } while (input);
}

int main()
{
    test();
    return 0;
}