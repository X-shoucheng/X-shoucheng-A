#include<stdio.h>
#include<string.h>
int n = 1;//�趨ȫ�ֱ���������ͳ�Ʋ�����
void hanoi (int i,char A,char B,char C)//��ŵ���ݹ飬iΪ�̺ţ�ABC�ֱ��Ӧ����
{
	if(i==1)//�ݹ���ֹ��
	{
		step (i,A,C);//���һ������A����C��
	}
	else//��ʼ�ݹ�
	{
		hanoi(i-1,A,C,B);//i-1�̴�A����B��
		step(i,A,C);//i�̴�A����C��
		hanoi(i-1,B,A,C);//i-1�̴�B����C��
	}
}
void step (int i,char X,char Y)
{
	printf("��%d���ƶ�����%d���̣� %c--->%c\n",n,i,X,Y);//��ӡ����
	n++;
}
int main()
{
	int i = 1;
	printf("��������������");
	scanf("%d",&i);//����������
	printf("���ӵ��ƶ��������£�\n");
	hanoi(i,'A','B','C');
	printf("�ܲ�����%d\n",n-1);
	return 0;
}