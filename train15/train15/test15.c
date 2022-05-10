#define _CRT_SECURE_NO_WARNINGS 1
//while循环
#include<stdio.h>
int main()
{
	//if (1)
	//	printf("nice\n");//打印一个nice
	//while (1)
	//	printf("nice\n");//打印多个nice

	//int i = 1;
	//while (i <= 10)//为真，执行循环语句
	//{
	//	if (i == 5)
	//		break;   //while循环中，break用于永久的终止循环
	//	printf("%d ", i);
	//	i++;
	//}



	//int a = 1;
	//while (a <= 10)
	//{    //while循环中，continue的作用是跳过本次循环continue后面的代码，直接去判断部分
	//	if (a == 5)
	//		continue;   //这里会死循环
	//	printf("%d ", i);
	//	i++;
	//}



	//getchar--字符输入函数    putchar--字符输出函数
	//EOF--end of file 文件结束标志
	//int ch = getchar();
	//printf("%c\n", ch);
	//putchar(ch);

	//int ch_1 = 0;
	//while ((ch_1 = getchar()) != EOF)
	//{
	//	putchar(ch_1);//ctrl+z---getchar读取结束
	//}



	//char password[20] = { 0 };
	//printf("请输入密码:>");
	//scanf("%s", password);
	//printf("请确认密码(y/n):>");
	//int ch = getchar();//这里getchar把缓冲区的\n拿过去了  printf后面要处理缓冲区
	//if (ch == 'y')
	//{
	//	printf("确认成功\n");
	//}
	//else
	//{
	//	printf("确认失败\n");
	//}


	//char password[20] = { 0 };
	//printf("请输入密码:>");//12 34代码会出现错误
	//scanf("%s", password);//scanf会把空格前面的拿走，后面太多一个getchar拿不走
	//printf("请确认密码(y/n):>");
	////清理缓存区
	//getchar();//处理\n

	//int ch = getchar();
	//if (ch == 'y')
	//{
	//	printf("确认成功\n");
	//}
	//else
	//{
	//	printf("确认失败\n");
	//}


	/*
	char password[20] = { 0 };
	printf("请输入密码:>"); 
	scanf("%s", password); 
	printf("请确认密码(y/n):>");
	//清理缓存区多个字符
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{     //getchar一直拿字符直到getchar拿到\n,此时tmp=\n,语句为假，跳出
		;//这里什么都不处理，直到跳出
	}
	
	int ch = getchar();//getchar返回类型为int型，所以可以用整型变量存储
	if (ch == 'y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	*/


	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')//||--或者
			continue;
		else 
		putchar(ch);
	}
	return 0;
}