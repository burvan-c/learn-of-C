//#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//#include<stdlib.h>
//
//int main()
//{
	//从大到小输出三个整数
	/*int a = 0, b = 0, c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tmp;
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);*/



	//打印1--100所有3的倍数的数字
	/*int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (0 == i % 3)
		{
			printf("%d ", i);
		}
	}*/




	//求两个数的最大公约数
	/*int m = 0, n = 0;
	scanf("%d%d", &m, &n);
	int max = (m > n) ? n : m;
	while (1)
	{
		if (0 == m % max && 0 == n % max)
		{
			printf("%d\n", max);
			break;
		}
		else
			max--;
	}*/



	//辗转相除法
	//int m = 0, n = 0;
	//scanf("%d%d", &m, &n);
	//int t = 0;
	//while (t = m % n)//%--取余
	//{
	//	m = n;
	//	n = t;
	//}
	//printf("%d\n", n);
	//最小公倍数=m*n/最大公约数




	//打印1000--2000的闰年
	/*int y = 0,count=0;
	for (y = 1000; y <= 2000; y++)
	{*/
		//判断是否为闰年（被4整除不能被100整除，能被400整除）
		/*if (((0==y%4)&&(0!=y%100)) || (0==y%400))
		{
			printf("%d ", y);
			count++;
		}
	}
	printf("\ncount=%d", count);*/



	//打印100-200之间的素数
	//int i = 0,count=0;
	//for (i = 101; i <= 200; i+=2)//排除偶数
	//{
	//	//2--i-1之间的数字去除i，是否能整除
	//	int j = 0;
	//	for (j = 2; j <i; j++)
	//	{
	//		if (0 == i % j)
	//		{
	//			break;//跳出第一个for循环
	//		}
	//	}
	//	if (i == j)
	//	{
	//		count++;
	//		printf("%d ", i);
	//	}
	//}
	//printf("\ncount=%d", count);



   //goto语句,只能在一个函数内跳转。
   /*flag:
   printf("eheh\n");
   printf("ahah\n");
   goto flag;*/


    //关机程序，只要运行2分钟内关机，输入我是猪就取消关机
	/*char input[20] = { 0 };
	system("shutdown -s -t 120");

	again:
	printf("输入我是猪，否则电脑关机\n");
	scanf("%s", input);
	if (strcmp(input,"我是猪")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}*/


    /*char input[20] = { 0 };
	system("shutdown -s -t 120");

	while (1)
    {
		printf("输入我是猪，否则电脑关机\n");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
			{
				system("shutdown -a");
				break;
			}
	 }*/
		 
//	return 0;
//}