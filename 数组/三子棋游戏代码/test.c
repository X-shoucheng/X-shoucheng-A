//���е�������
#include "game.h"
void menu() //��Ϸ����˵�
{
    printf("*********************\n");
    printf("***1-play***0-exit***\n");
    printf("*********************\n");
}
void game() //��Ϸ���㷨
{
    char ret = 0;//ret�����ж���Ϸ�Ľ���
    char board[ROW][COL] = {0};    //�����������ȹ���
    InitBoard(board, ROW, COL);    //��ʼ������
    DisplayBoard(board, ROW, COL); //��ӡ����
    //����
    while (1)//ѭ��һֱ����������break
    {
        PlayerMove(board, ROW, COL);//�������
        DisplayBoard(board, ROW, COL);//��ӡ����
        ret = IsWin(board, ROW, COL); //�ж������Ӯ
        if (ret != 'C')
        {
            break;
        }
        ComputerMove(board, ROW, COL); //��������
        DisplayBoard(board, ROW, COL);//��ӡ����
        ret = IsWin(board, ROW, COL); //�жϵ�����Ӯ
        if (ret != 'C')
        {
            break;
        }
    }
    if (ret == '*')
    {
        printf("���Ӯ��\n");
    }
    if (ret == 'o')
    {
        printf("����Ӯ...\n");
    }
    if (ret == 'C')
    {
        printf("ƽ��\n");
    }
}
void test()
{
    int input = 0;
    srand((unsigned int)time(NULL));//�������������ʱ��Ϊ���������
    do
    {
        menu();//���ȴ�ӡ��Ϸ����˵�
        printf("��ѡ��");
        scanf("%d", &input);
        switch (input)//����1������case1������0������case2����������������default
        {
        case 1:
            game();//������Ϸ
            break;
        case 2:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("ѡ�����������ѡ��\n");
            break;
        }
    } while (input);
}

int main()
{
    test();
    return 0;
}