#include"game.h"//头文件引用后，不需要重复引用库函数
void menu()//游戏进入菜单
{
	printf("*****************\n");
	printf("****  1-play  ***\n");
	printf("****  0-exit  ***\n");
	printf("*****************\n");
}
void game()//进入游戏
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//这里解注释的话，就可以看到哪里埋了雷
	//扫雷
	FindMine(mine,show,ROW,COL);

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//建立以时间戳为种子的随机数，为埋雷服务
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
		default:
			printf("选择错误！请重新选择：\n");
		}
	} while (input);//输入0退出循环，进而退出程序；输入非0才进入循环
}
int main()//程序进入口
{
	test();
	return 0;
}