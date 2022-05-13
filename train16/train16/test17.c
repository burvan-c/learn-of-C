#define _CRT_SECURE_NO_WARNINGS 1
//do+循环语句；+while(表达式);   表达为真执行循环语句，为假跳出循环
#include<stdio.h>
int main()
{
	/*int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} while (i <= 10);*/


	//int i = 1;
	//do
	//{
	//	if (5 == i)
	//		break;     //break永久跳出循环

	//	printf("%d ", i);
	//	i++;
	//} while (i <= 10);


	//int i = 1;
	//do
	//{
	//	if (5 == i)
	//		continue;   //跳出continue后面的循环语句，这里程序会死循环

	//	printf("%d ", i);
	//	i++;
	//} while (i <= 10);


	//实现n！
	//int n;          //注意scanf函数的易错点
	//scanf("%d", &n);//scanf函数的数据类型后面一般不放入\n,若放入\n则scanf会换行继续读取数据************
	//int i=0,a=1;
	//for (i = 1; i <= n; i++)//++i表示先自加再赋值
	//{
	//	a*=i;
	//}
	//printf("%d\n", a);


	//计算1！+2!+.....+10!
	//int n,a;          //注意scanf函数的易错点
	////scanf("%d", &n);//scanf函数的数据类型后面一般不放入\n,若放入\n则scanf会换行继续读取数据************
	//int i = 0, sum=0;
	//for (n = 1; n <= 10; n++)
	//{//计算阶乘前，把a初始为1
	//	for (a = 1, i = 1; i <= n; i++)//++i表示先自加再赋值
	//	{
	//		a *= i;
	//	}
	//	sum += a;
	//}
	//printf("%d\n", sum);

	//改进
	int n=0, a=1;           
	 	int i = 0, sum = 0;
	for (n = 1; n <= 10; n++)
	{ 
		a *= n;
		sum += a;
	}
	printf("%d\n", sum);
	return 0;
}