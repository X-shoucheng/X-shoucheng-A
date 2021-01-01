#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "welcome to china!!!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1)-1;                                    //计算arr1的字符长度，减一是配合下标，需要引用string.h库
	while(left<=right)
	{
		arr2[left] = arr1[left];                                      //将arr1的字符赋值给arr2
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		Sleep(500);                                                     //暂停0.5秒，需要引用Windows.h库
        system("cls");                                                 //执行系统命令，清屏，需要引用stdlib.h库
        left++;
		right--;
	}
    printf("%s\n", arr1);                                           //最后再打印字符
    return 0;
}