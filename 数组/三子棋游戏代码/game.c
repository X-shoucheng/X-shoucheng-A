//主程序调用的函数

#include "game.h"；
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
        for (j = 0; j < col; j++)//打印一行
        {
            printf(" %c ", board[i][j]);//打印空格+数组符号+空格
            if (j < col - 1)
            {
                printf("|");//在最后一行前打印竖线
            }
        }
        printf("\n");
        if (i < row - 1)
        {
            for (j = 0; j < col; j++)
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
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';
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
        x = rand() % row;
        y = rand() % col;
        if (board[x][y] == ' ')
        {
            board[x][y] = 'o';
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
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
        {
            return board[i][1];
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