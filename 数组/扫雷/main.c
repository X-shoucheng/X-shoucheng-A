#include"game.h"//ͷ�ļ����ú󣬲���Ҫ�ظ����ÿ⺯��
void menu()//��Ϸ����˵�
{
	printf("*****************\n");
	printf("****  1-play  ***\n");
	printf("****  0-exit  ***\n");
	printf("*****************\n");
}
void game()//������Ϸ
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//�����ע�͵Ļ����Ϳ��Կ�������������
	//ɨ��
	FindMine(mine,show,ROW,COL);

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//������ʱ���Ϊ���ӵ��������Ϊ���׷���
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);//����0�˳�ѭ���������˳����������0�Ž���ѭ��
}
int main()//��������
{
	test();
	return 0;
}