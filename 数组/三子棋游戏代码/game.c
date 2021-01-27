#include "game.h"��//����ͷ�ļ�

void InitBoard(char board[ROW][COL], int row, int col)//��ʼ������
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';//������������ȫ����ո�
        }
    }
}
void DisplayBoard(char board[ROW][COL], int row, int col)//��ӡ����
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < col; j++)//��ӡһ�У����̸������
        {
            printf(" %c ", board[i][j]);//��ӡ�ո�+�������+�ո�
            if (j < col - 1)
            {
                printf("|");//������һ��֮���ӡ���ߣ������һ�в��ô�ӡ
            }
        }
        printf("\n");
        if (i < row - 1)
        {
            for (j = 0; j < col; j++)//�ٴ�ӡһ�У�ÿ�����̸�ֱ�ӵķָ���
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
    printf("\n\n�����");
    while (1)
    {
        printf("\n���������꣨�к�,�кţ���\n");
        scanf("%d,%d", &x, &y);
        printf("\n");
        //�ж�����Ϸ���
        if (x >= 1 && x <= row && y >= 1 && y <= col) //Ĭ�����������ԣ�1,1����ʼ
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';//�������������������*
                break;
            }
            else
            {
                printf("\n�����겻����,�ѱ�ռ��\n");
            }
        }
        else
        {
            printf("\n����Ƿ������������룡\n");
        }
    }
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("\n\n�����ߣ�\n");

    while (1)
    {
        x = rand() % row;//����������õ����ߣ�ģ��ֵһ����0~row-1֮��
        y = rand() % col;
        if (board[x][y] == ' ')
        {
            board[x][y] = 'o';//�ڵ��Բ����������Ϸ�o
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
                return 0; //�пո�˵��û��������0
            }
        }
    }
    return 1; //�޿ո�˵�����ˣ�����1
}
char IsWin(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++) //������
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//������������������
        {
            return board[i][1];//�����ж���˭�µģ�ֻҪ�������̵�ֵ����
        }
    }
    for (i = 0; i < col; i++) //������
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
        {
            return board[1][i];
        }
    }
    //�����Խ���
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    //�ж��Ƿ�ƽ��
    if (IsFull(board, ROW, COL) == 1)
    {
        return 'Q';
    }
    return 'C';
}