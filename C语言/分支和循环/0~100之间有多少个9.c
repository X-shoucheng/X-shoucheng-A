#include <Windows.h>
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	int count = 0;
	for(i=1;i<=100;i++)
	{
		if(i%10 == 9) //个位为9的数 19,29,39,49,59,69,79,89,99
			count++;
		if(i/10 == 9)  //十位为9的数91,92,93,94,95,96,97,98,99
			count++;
	}
	printf("count = %d\n",count);
	return 0;
}