//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>


//函数指针数组--存放函数指针的数组
//整形指针int*     整形指针数组int* arr[4]
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("1.add    2.sub\n");
//	printf("3.mul    4.div\n");
//	printf("    0.exit     \n");
//}
//int main()
//{
//	//int(*pf1)(int, int) = Add;//函数名相当于函数地址
//	//int(*pf2)(int, int) = Sub;//函数名相当于函数地址
//	//int(*pfarr[2])(int, int) = {pf1,Sub};
//	////pfarr[2]表示数组，剩下的int(*)(int,int)表示函数指针
//	////函数指针数组存放同类型的函数指针
//
//
//	//计算器--加、减、乘、除
//	int input = 0;
//	do
//	{
//		menu();
//		
//		int x = 0, y = 0, ret = 0;
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//
//			int(*pfarr[5])(int, int) = { NULL, Add,Sub,Mul,Div };
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = (pfarr[input])(x, y);
//			printf("ret=%d\n",ret);
//		}
//		else if(input==0)
//		{
//			printf("退出程序\n");
//			break;//跳出循环
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//		
//
//
//		
//	} while (input);
//
//	return 0;
//}



//指向函数指针数组的指针
//int(*P)(int, int);//函数指针
//int(*p2[4])(int, int);//函数指针数组
//int(*(*p3)[4])(int, int)=&p2;//p3是指向函数指针数组的指针




//回调函数--一个通过函数指针调用的函数；函数指针作为参数传递给另一个函数
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("1.add    2.sub\n");
//	printf("3.mul    4.div\n");
//	printf("    0.exit     \n");
//}
//int Calc(int (*pf) (int,int))//Add为函数地址，参数应为函数指针
//{
//	int x = 0, y = 0;
//	printf("请输入两个操作数:>");			
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//int main()
//{
////	int(*pf1)(int, int) = Add;//函数名相当于函数地址
////	int(*pf2)(int, int) = Sub;//函数名相当于函数地址
////	int(*pfarr[2])(int, int) = {pf1,Sub};
//	//pfarr[2]表示数组，剩下的int(*)(int,int)表示函数指针
//	//函数指针数组存放同类型的函数指针
//
//
//	//计算器--加、减、乘、除
//	int input = 0;
//	do
//	{
//		menu();
//		
//		int ret = 0;
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			ret = Calc(Add);
//			printf("ret=%d\n",ret);
//			break;
//		case 2:
//			ret = Calc(Sub);
//
//			printf("ret=%d\n",ret);
//			break;
//		case 3:
//			ret = Calc(Mul);
//
//			printf("ret=%d\n",ret);
//			break;
//		case 4:
//			ret = Calc(Div);
//
//			printf("ret=%d\n",ret );
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//		
//	} while (input);
//
//	return 0;
//}



//qsort函数使用--快速排序函数**************************************************
 
 
 
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	//冒泡排序
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}



//void qsort(void* base, //base存放待排序数据中第一个对象的地址
//           size_t num, //数据元素个数
//           size_t size,//数据中一个元素大小，单位字节
//           int (*compar)(const void*, const void*)//用来比较待排序数据中2个元素的函数
//           );



//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	//整形排序
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	print_arr(arr, sz);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int sort_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//
//}
//
//void test2()
//{
//	//用qsort函数排序结构体函数
//	struct Stu s[] = { {"zhangsan",30},{"lisi",34},{"wangwu",20}};
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	//按年龄排序
//    //qsort(s, sz, sizeof(s[0]), sort_by_age);
//
//	//按照名字排序
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}




//模仿qsort函数实现通用冒泡排序
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//
//void bubble_sort(void* base,
//	int sz,
//	int width,
//	int(*cmp)(const void* e1, const void* e2)
//)
//{
//	int i = 0;
//	//趟数 
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两元素比较
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}