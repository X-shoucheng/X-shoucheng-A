//����Ӧ�õĺ���
#define ROW 3
#define COL 3

//����Ӧ��һ�Σ�Դ�ļ��Ͳ���Ҫ�ظ�����
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//��������
void InitBoard(char board[ROW][COL], int row, int col);//��ʼ������
void DisplayBoard(char board[ROW][COL], int row, int col);//��ӡ����
void PlayerMove(char board[ROW][COL], int row, int col);//�������
void ComputerMove(char board[ROW][COL], int row, int col);//��������

char IsWin(char board[ROW][COL], int row, int col);//�ж���Ϸ����
//������ֽ����1.���Ӯ 2.����Ӯ 3.ƽ�� 4.��Ϸ����
//��Ӧ����ַ���      *            o          Q            C
