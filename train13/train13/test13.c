#define _CRT_SECURE_NO_WARNINGS 1
//分支与循环语句
#include<stdio.h>
int main()
{
	int age = 10;
	if (age >= 18)
		printf("成年\n");
	else
		printf("未成年\n不能谈恋爱\n");//if和else执行{}内的语句或只执行一条语句


	if (age < 18)
		printf("少年\n");
	else if (age >= 18 && age < 26)//错误写法：18<=age<26,这个语句从左向右执行必为真（1）
		printf("青年\n");
	else if (age >= 26 && age < 40)//&&以及前面的可以不写
		printf("中年\n");
	else if (age >= 40 && age < 60)
		printf("壮年\n");
	else if (age >= 60 && age < 100)
		printf("老年\n");
	else                          //最后的else不需要变量列表
		printf("老不死\n");



	//悬空else
	int a = 0, b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("老妈很烦\n");
		else
			printf("老爸一样\n");
	}//代码分割 
	//else与最近的if 匹配

	/*int num ;
	scanf("num=%d\n", &num);
	if (num % 2 == 1)
		printf("奇数\n");
	else
		printf("偶数\n");*/

	int i=1;
	while (i <= 100)
	{
		if (i % 2 == 0)
			i++;
		else
		{
			printf("%d ", i);
			i++;
		}//执行多条语句时要加大括号****************************************
	}
	return 0;
}