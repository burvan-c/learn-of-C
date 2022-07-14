#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//指针进阶

//一级指针传参
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p为一级指针
//	print(p, sz);
//	return 0;
//}



//二级指针传参
//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	test(ppa);//二级指针传参
//	printf("%d\n", a);
//	return 0;
//}



//函数指针--指向函数的指针
//&函数名--取到函数的地址
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main() 
//{
//	int x = 0, y = 0;
//	Add(x, y);
//	int (*pf)(int, int) = &Add;//函数指针***************************
// *pf--函数指针变量
//	return 0;
//}



//void test(char* str)
//{
//
//}
//
//int main()
//{
//	void(*pt)(char*) = &test;//指向char*,返回类型void********************
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int (*pf)(int, int) = &Add;
//	//int ret = (*pf)(3, 5);//()优先级高于*
//
//	int (*pf)(int, int) = Add;//Add==pf
//	int ret = pf(3, 5);
//
//	printf("%d\n", ret);
//	return 0;
//}



//int main()
//{
//	(*(void(*)())0)();
//	//调用0地址处的函数
//	//函数无参，返回类型为void
//	//void(*)()--函数指针类型
//	//(void(*)())0--对0进行强制类型转换，被解释为一个函数地址
//	//*(void(*)())0--对0地址解引用
//	//(*(void(*)())0)()--调用0地址函数
//
//
//
//	void(*signal(int, void(*)(int)))(int);
//	//void(*)(int)--函数指针类型
//	//signal--函数名
//	//(int, void(*)(int))--signal函数两个参数
//	//signal函数的返回类型是函数指针--void(*)(int)
//
//	
//
//	//typedef--对类型重定义
//	typedef void(*pfun_t)(int);//把void(*)(int)的函数指针类型重命名为pfun_t
//	typedef unsigned int uint;
//
//
//	pfun_t signal(int, pfun_t);//这里等价于void(*signal(int, void(*)(int)))(int)
//	return 0;
//}



//函数指针数组--存放函数指针的数组
//整形指针int*     整形指针数组int* arr[4]
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("1.add    2.sub\n");
	printf("1.add    2.sub\n");
	printf("    0.exit     \n");
}
int main()
{
	//int(*pf1)(int, int) = Add;//函数名相当于函数地址
	//int(*pf2)(int, int) = Sub;//函数名相当于函数地址
	//int(*pfarr[2])(int, int) = {pf1,Sub};
	////pfarr[2]表示数组，剩下的int(*)(int,int)表示函数指针
	////函数指针数组存放同类型的函数指针


	//计算器--加、减、乘、除
	int input = 0;
	do
	{
		menu();
		
		int x = 0, y = 0, ret = 0;
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("ret=%d\n");
			break;
		case 2:
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("ret=%d\n");
			break;
		case 3:
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("ret=%d\n");
			break;
		case 4:
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("ret=%d\n");
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
		
	} while (input);

	return 0;
}