//
#define ROW 3
#define COL 3

//这里应用一次，源文件就不需要重复引用
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//输出四种结果：1.玩家赢 2.电脑赢 3.平局 4.游戏继续
//对应输出字符：    *         o       Q        C
char IsWin(char board[ROW][COL], int row, int col);
