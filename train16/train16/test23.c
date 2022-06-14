//#define _CRT_SECURE_NO_WARNINGS 1
//函数递归：调用自身编程技巧
//#include<stdio.h>
//int main()
//{
//	printf("programming\n");
//	main();
//	return 0;
//}


//接受一个整型值，按照顺序打印每一位。
//#include<stdio.h>
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
/*}*///不管主函数还是调用函数，都要把程序走完。
 //n=1打印出来后，回到上一级的调用函数（n=12)把剩余程序走完；以此类推；最后回到主函数走完程序
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	递归--函数自己调用自己
//	print(num);//打印数字每一部分
//	return 0;
//}
//栈溢出
//栈区：局部变量、函数形参
//堆区：动态内存
//静态区：全局变量、静态变量
//递归代码：不能死递归；有跳出条件；每次有逼近跳出条件；递归层次不能太深



//编写函数不能创建临时变量，求字符串长度
//#include<stdio.h>
//int my_strlen(char*str)
//{
//	if (*str != '\0')//字符串结束标志
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;//第一个字符就是'\0'
//}
//int main()
//{
//	char arr[] = "programming";
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));//实参传过去的是首元素的地址
//	return 0;
//}


//递归与迭代
//求n的阶乘
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	//迭代
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}




//求第n个斐波那契数（前两个数为第三个数）（不考虑溢出）
//#include<stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}//这里用递归重复计算多效率低
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int Fib(int n)
//{
//	int a = 1, b = 1, c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}//效率高但结果不准确，会有溢出
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}