#define ROW 9//չʾ�����̸���
#define COL 9

#define ROWS ROW + 2//ʵ�ʵ����̸���
#define COLS COL + 2

#define EASY_COUNT 10//���̰���������
//�⺯�����������ã�����ֻҪ����ͷ�ļ�����
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//���õĺ���
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);//��ʼ������
void DisplayBoard(char board[ROWS][COLS], int row, int col);//��ӡ����
void SetMine(char board[ROWS][COLS], int row, int col);//������
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//ɨ��
int get_mine_count(char mine[ROWS][COLS], int x, int y);//��������������Χ8�����ӵ�����
void show_nearby(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);//չ������������Χ������