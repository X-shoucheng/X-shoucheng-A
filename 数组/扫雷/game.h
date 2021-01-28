#define ROW 9//展示的棋盘格数
#define COL 9

#define ROWS ROW + 2//实际的棋盘格数
#define COLS COL + 2

#define EASY_COUNT 10//棋盘包含的雷数
//库函数在这里引用，后面只要引用头文件即可
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//引用的函数
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);//初始化棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);//打印棋盘
void SetMine(char board[ROWS][COLS], int row, int col);//设置雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//扫雷
int get_mine_count(char mine[ROWS][COLS], int x, int y);//计算输入坐标周围8个格子的雷数
void show_nearby(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);//展开输入坐标周围的棋盘