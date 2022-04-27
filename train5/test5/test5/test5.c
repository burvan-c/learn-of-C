#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int input = 0;//存放输入值的变量
	//printf("学习编程:>\n");
	//printf("学习c语言?(1/0):>\n");
	//scanf("%d",&input);//scanf函数要取地址
	//if (input == 1)
	//	printf("未来年薪百万\n");
	//else
	//	printf("捡破烂吧你><\n");



	int day = 0;
	while (day < 3600)
	{
		printf("写代码:%d\n", day);
		day++;
	}
	if (day >= 3600)
		printf("年薪无限大！哈哈！\n");
	return 0;
}