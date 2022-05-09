#define _CRT_SECURE_NO_WARNINGS 1
//while循环
#include<stdio.h>
int main()
{
	//if (1)
	//	printf("nice\n");//打印一个nice
	//while (1)
	//	printf("nice\n");//打印多个nice

	int i = 1;
	while (i <= 10)//为真，执行循环语句
	{
		printf("%d ", i);
		i++;
	}
	return 0;
}