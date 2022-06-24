//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//指针   编号     地址
//int main()
//{
//	int a = 10;//a占8个字节
//	int* pa = &a;//拿到的是a的8个字节中第一个字节的地址
//	*pa = 20;
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int* pa;
//	char* pb;
//	float* pc;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pb));
//	printf("%d\n", sizeof(pc));
//}



//指针类型的意义
//1.指针类型决定指针解引用权限大小
//2.指针类型决定指针步长大小
//int main()
//{
//	int a = 0x11223344;//1个16进制位等于4个2进制位，即半个字节
//	int* pa = &a;
//	//char* pa = &a;   int访问8个字节，char访问2个字节
//	*pa = 0;
//
//
//
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//
//	printf("%p\n", p);
//	printf("%p\n", p+1);//+4
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//+1
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//野指针：指针指向位置不可知
//int main()
//{
	//int* p;//p为局部指针变量,局部变量不初始化，默认为随机值
	//*p = 20;//非法访问内存

	//越界访问
	/*int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 10; i += )
	{
		*p = i;
		p++;
	}
	return 0;*/
//}


//int* test()
//{
//	int a = 0;
//	return &a;//a为局部变量，返回时地址已销毁
//}
//int main()
//{
//	int* p = test();
//		* p = 20;//非法访问
//	return 0;
//}


//指针初始化
//int main()
//{
//	int* p = NULL;
//	if (p != NULL)
//		*p = 10;
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//指针-指针=两个指针之间的元素个数
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}


//指针与数组
//int main()
//{
//	int arr[10] = { 0 };
	//printf("%p\n", arr);//数组名是数组首元素地址
	//printf("%p", &arr[0]);


//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p<==>%p\n", &arr[i], p + i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	//arr[2]<==>*(p+2)<==>*(2+arr)==2[arr]
//	printf("%d\n", 2[arr]);
//	//[]是操作符，2与arr是操作数
//	printf("%d\n", 2[p]);
//	return 0;
//}






//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//一级指针.pa为指针变量
//	int** ppa = &pa;//pa是变量，&pa取出pa在内存中的起始地址
//	//ppa为二级指针
//	//*ppa==pa    *pa==a==**ppa
//	return 0;
//}





//指针数组---本质为数组
//int main()
//{
//	int arr[10];//整型数组
//	char ch[5];//字符数组
//
//	int* parr[5];//整形指针的数组
//	char* pch[5];//字符指针的数组
//	return 0;
//}
