#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//     for(表达式1；表达式2；表达式3）  初始化  判断  调整
//          循环语句
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}

	printf("\n");

	int i_1 = 0;
	for (i_1 = 1; i_1 <= 10; i_1++)
	{
		if (i_1 == 5)
			break;   //跳出循环
		printf("%d ", i_1);
	}

	printf("\n");

	int i_2= 0;
	for (i_2 = 1; i_2 <= 10; i_2++)
	{
		if (i_2 == 5)
			continue;//跳过continue后面的语句
		printf("%d ", i_2);
	}


	//for循环建议用 前闭后开区间 写法
	//判断部分省略--死循环
	for (;;)
	{
		printf("123\n");
	}

	int a = 0, b = 0;
	for (a = 0, b = 0; b = 0; a++, b++)//判断部分为赋值语句，判断为假，0循环
		b++;
	return 0;
}