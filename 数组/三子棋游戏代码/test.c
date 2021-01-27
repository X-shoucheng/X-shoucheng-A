//运行的主程序
#include "game.h"
void menu() //进入菜单
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
    while (1)
    {
        //玩家下棋
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断玩家输赢
        ret = IsWin(board, ROW, COL);
        if (ret != 'C')
        {
            break;
        }
        //电脑下棋
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断电脑输赢
        ret = IsWin(board, ROW, COL);
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
    srand((unsigned int)time(NULL));
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