#include "game.h"；//引用头文件

void InitBoard(char board[ROW][COL], int row, int col)//初始化棋盘
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';//首先数组里面全部存空格
        }
    }
}
void DisplayBoard(char board[ROW][COL], int row, int col)//打印棋盘
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < col; j++)//打印一行，棋盘格加竖线
        {
            printf(" %c ", board[i][j]);//打印空格+数组符号+空格
            if (j < col - 1)
            {
                printf("|");//在上面一串之后打印竖线，但最后一列不用打印
            }
        }
        printf("\n");
        if (i < row - 1)
        {
            for (j = 0; j < col; j++)//再打印一行，每行棋盘格直接的分隔线
            {
                printf("---");
                if (j < col - 1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("\n\n玩家走");
    while (1)
    {
        printf("\n请输入坐标（行号,列号）：\n");
        scanf("%d,%d", &x, &y);
        printf("\n");
        //判断坐标合法性
        if (x >= 1 && x <= row && y >= 1 && y <= col) //默认棋盘坐标以（1,1）开始
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';//在玩家输入的坐标里放上*
                break;
            }
            else
            {
                printf("\n该坐标不可用,已被占用\n");
            }
        }
        else
        {
            printf("\n坐标非法，请重新输入！\n");
        }
    }
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("\n\n电脑走：\n");

    while (1)
    {
        x = rand() % row;//产生随机数让电脑走，模的值一定在0~row-1之间
        y = rand() % col;
        if (board[x][y] == ' ')
        {
            board[x][y] = 'o';//在电脑产生的坐标上放o
            break;
        }
    }
}
int IsFull(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0; //有空格，说明没满，返回0
            }
        }
    }
    return 1; //无空格，说明满了，返回1
}
char IsWin(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++) //横三行
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//仅仅适用于三行三列
        {
            return board[i][1];//不用判断是谁下的，只要返回棋盘的值就行
        }
    }
    for (i = 0; i < col; i++) //竖三列
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
        {
            return board[1][i];
        }
    }
    //两个对角线
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    //判断是否平局
    if (IsFull(board, ROW, COL) == 1)
    {
        return 'Q';
    }
    return 'C';
}