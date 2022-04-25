#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//'a'--字符a
//int main()
//{
//	//字符型
//	char ch = 'a';    //把字符a放到ch的变量空间里
//	//整型
//	int age = 20;
//	//短整型
//	short int num = 10;
//	//长整型
//	long int size = 500;
//	//长长整型
//	long long int point = 80;
//	//单精度浮点型
//	float weight = 12.5;
//	//双精度浮点型
//	double d = 1.2;
//	
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 100);
//	//sizeof - 关键字 - 操作符 - 计算类型或变量所占空间大小
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	//创建一个变量
//	//类型  变量的名字=。。。。
//	int age = 21;
//	double weight = 73;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight); //int用%d,float用%f,double用%lf
//}

//
//int a = 100;
//int main()
//{
//	//大括号内部的是局部变量（a），大括号外部为全局变量
//	int a = 13;
//	printf("%d\n", a);  //局部变量优先
//		return 0;
//}//不建议把全局变量与局部变量名字写成一样

//scanf为输入函数
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int sum = 0;//先定义变量再赋值
//	scanf("%d%d", &a, &b);//注意scanf函数用法
//	 sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//}



//作用域：a可在哪个区域被识别那个区域就是a的作用域
//局部变量作用域：变量所在局部范围
//全局变量作用域：程序内都可识别
//int g_val = 2022;
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("burvan\n");
//	{
//		int a = 24;
//			printf("a=%d\n", a);
//			printf("2:%d\n", g_val);
//	}
//	printf("3:%d\n", g_val);
//	return 0;
//}




//生命周期
//变量的生命周期：变量的创建与销毁之间的时间段
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期




//常量：
// 1.字面常量（10，‘a',"abcdefg")
//2.const修饰的常变量
//int main()
//{
//	int num1 = 10;
//	num1 = 20;   //num1为变量
//	printf("1:num1=%d\n", num1);
//	const int num2 = 30;
//	printf("2:num2=%d\n", num2);//num2是常变量，具有常属性，不可被改变
//	return 0;
//
//
//
//	int arr[10] = { 0 };//数组有10个元素，这里为正确表达
//
//	int n = 10;
//	int arr[n] = { 0 };//n为变量，这里是错误表达
//
//	const int n = 10;  //n仍是变量属性
//	int arr[n] = { 0 };//n为常变量，仍是错误表达
//}
//3.#define定义的标识符常量
//#define max 10000   //注意形式,定义后为标识符常量，不可更改
//int main()
//{
//	int n = max;
//	printf("n=%d\n", n);
//	return 0;
//}
//4.枚举常量
//可以一一列举的常量
//enum sex    //enum为枚举关键字（enumerate  枚举）
//{
//	male,
//	female,
//	secret         //枚举类型变量的可能取值
//};
//int main()
//{
//	enum sex s = male;
//
//	printf("%d\n", male);   //输出为0（male默认初值为0，若赋初值为3，则从3开始）
//	printf("%d\n", female);  //输出为1
//	printf("%d\n", secret);   //输出为2
//
//	return 0;
//}