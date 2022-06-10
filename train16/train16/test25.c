#define _CRT_SECURE_NO_WARNINGS 1
//一维数组
//数组：相同元素的集合；常量表达式
//完全初始化  int arr[10]={1,2,3,4,5,6,7,8,9,10}
//不完全初始化  int arr[10]={1,2,3,4,5}  剩余默认为0
//char ch[5]="abc"  a b c \0 0
//char ch[]="abc"   a b c \0
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;
//	int i =0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	/*printf("%x\n", 0x12);
//	printf("%p\n", 0x12);*///%p--按地址格式打印--十六进制打印
//
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//		//一维数组在内存中是连续存放的
//		//随着数组下标的增长，地址由低到高变化
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//数组名是数组首元素地址**************************************
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//二维数组
//#include<stdio.h>
//int main()
//{
	//创建
	/*int arr[3][4];
	char ch[3][5];*/
	//初始化--创建的同时赋值
	/*int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };*/
	//[0]行：1，2，3，4   [1]行：5，6，7，8    [2]行：9,10,11,12
	//      [0][1][2][3]        [0][1][2][3]         [0][1][2][3]

	/*int arr2[][4] = { {1,2},{3,4},{5,6} };*/
	//[0]行：1，2，0, 0   [1]行：3，4，0，0    [2]行：5, 6, 0, 0
	//      [0][1][2][3]        [0][1][2][3]         [0][1][2][3]
	//行可以省略，列不可以省略

	/*int i = 0, j = 0;*/
	/*for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%-2d ", arr[i][j]);
		}
		printf("\n");
	}*/

	/*for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);
		}
	}*/

	//二维数组在内存中连续存放

	/*int* p = &arr[0][0];
	for (i = 0; i < 12; i++)
	{
		printf("%d ", *p);
		p++;
	}*/

	//第一行数组名：arr[0]
	//第二行数组名：arr[1]
	//第三行数组名：arr[2]
//	return 0;
//}



//数组作为函数参数
//#include<stdio.h>
//void bubble_sort(int arr[],int sz)//形参arr的本质是指针
//{
//
//	////计算数组元素个数
//	//int sz = sizeof(arr) / sizeof(arr[0]);//传递过来的是首元素地址，应放在主函数中
//
//	//确定躺数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟排序过程
//		int j = 0;
//		int flag=1;
//		for (j = 0; j <sz-i-1 ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[]={9,8,7,6,5,4,3,2,1,0};
//	//计算数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序上升--冒泡排序
//	bubble_sort(arr,sz);
//	return 0;
//}
//数组名为首元素地址，但是有2个例外：
//1.sizeof(数组名)--数组名表示整个数组--计算整个数组的大小，单位是字节
//2.&数组名--数组名表示整个数组--取出的是整个数组的地址



//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);       //&arr取出的是数组的地址
//	printf("%p\n", &arr+1);
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	return 0;
//}