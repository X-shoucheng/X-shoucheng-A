#include<stdio.h>
#include<string.h>
int n = 1;//设定全局变量，用来统计步骤数
void hanoi (int i,char A,char B,char C)//汉诺塔递归，i为盘号，ABC分别对应柱子
{
	if(i==1)//递归终止，
	{
		step (i,A,C);//最后一步，从A柱到C柱
	}
	else//开始递归
	{
		hanoi(i-1,A,C,B);//i-1盘从A柱到B柱
		step(i,A,C);//i盘从A柱到C柱
		hanoi(i-1,B,A,C);//i-1盘从B柱到C柱
	}
}
void step (int i,char X,char Y)
{
	printf("第%d次移动，第%d号盘： %c--->%c\n",n,i,X,Y);//打印步骤
	n++;
}
int main()
{
	int i = 1;
	printf("请输入盘子数：");
	scanf("%d",&i);//接受盘子数
	printf("盘子的移动步骤如下：\n");
	hanoi(i,'A','B','C');
	printf("总步骤数%d\n",n-1);
	return 0;
}