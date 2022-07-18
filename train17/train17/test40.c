//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
	//int a[] = { 1,2,3,4 };//整形变量4个字节
	//printf("%d\n", sizeof(a));//sizeof(数组名）--整个数组的大小
	//printf("%d\n", sizeof(a+0));//a+0:第一个元素地址，x64为8个字节
	//printf("%d\n", sizeof(*a));//*a:第一个元素，整形变量，4个字节
	//printf("%d\n", sizeof(a+1));//a+1:第二个元素地址，x64为8个字节
	//printf("%d\n", sizeof(a[1]));//第二个元素，整形变量，4个字节


	//printf("%d\n", sizeof(&a));//&a--数组地址，计算一个地址的大小
	//printf("%d\n", sizeof(*&a));//一个数组大小
	//printf("%d\n", sizeof(&a+1));//一个地址大小
	//printf("%d\n", sizeof(&a[0]));//一个地址大小
	//printf("%d\n", sizeof(&a[0]+1));//一个地址大小

	



	/*char arr[] = { 'a','b','c','d','e','f' };*/
	//printf("%d\n", sizeof(arr));// 计算数组大小--6个字符
	//printf("%d\n", sizeof(arr+0));// 计算首元素地址大小
	//printf("%d\n", sizeof(*arr));// 首元素个数
	//printf("%d\n", sizeof(arr[1]));// 第二个元素
	//printf("%d\n", sizeof(&arr));// 一个地址大小
	//printf("%d\n", sizeof(&arr+1));// 一个地址大小
	//printf("%d\n", sizeof(&arr[0]+1));// 一个地址大小



	//printf("%d\n", strlen(arr));// 随机值
	//printf("%d\n", strlen(arr+0));// 随机值
	////printf("%d\n", strlen(*arr));// 出错err
	////printf("%d\n", strlen(arr[1]));// 出错err
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr+1));// 随机值
	//printf("%d\n", strlen(&arr[0]+1));// 随机值




	//char arr[] = {"abcdef"};//'\0'
	//printf("%d\n", sizeof(arr));// 计算数组大小--7个字符7个字节 
	//printf("%d\n", sizeof(arr+0));// 首元素地址大小--8个字节
	//printf("%d\n", sizeof(*arr));//  第一个元素大小--1个字节
	//printf("%d\n", sizeof(arr[1]));// 第二个元素大小--1个字节 
	//printf("%d\n", sizeof(&arr));// 一个地址大小--8个字节 
	//printf("%d\n", sizeof(&arr+1));//  一个地址大小--8个字节 
	//printf("%d\n", sizeof(&arr[0]+1));//  一个地址大小--8个字节 



	//printf("%d\n", strlen(arr));//含6个字符--6
	//printf("%d\n", strlen(arr+0));//同上一个
	//printf("%d\n", strlen(*arr));//err 
	//printf("%d\n", strlen(arr[1]));// err
	//printf("%d\n", strlen(&arr));//同arr--6
	//printf("%d\n", strlen(&arr+1));//arr下个数组--随机值 
	//printf("%d\n", strlen(&arr[0]+1));// 从b开始数字符--5 



	//char* p = "abcdef";//'\0'
	//printf("%d\n", sizeof(p));// 一个指针（地址）大小--8个字节
	//printf("%d\n", sizeof(p+1));//（b)一个指针（地址）大小--8个字节 
	//printf("%d\n", sizeof(*p));// *p<==>a,一个字符大小--1个字节  
	//printf("%d\n", sizeof(p[0]));// a,一个字符大小--1个字节  
	//printf("%d\n", sizeof(&p));// 一个指针（地址）大小--8个字节 
	//printf("%d\n", sizeof(&p+1));//  一个指针（地址）大小--8个字节 
	//printf("%d\n", sizeof(&p[0]+1));// 一个指针（地址）大小--8个字节  


	//printf("%d\n", strlen(p));//含6个字符--6
	//printf("%d\n", strlen(p + 1));// 从b开始--5
	////printf("%d\n", strlen(*p));// err 
	////printf("%d\n", strlen(p[0]));//  err
	//printf("%d\n", strlen(&p));//同p,含6个字符--6
	//printf("%d\n", strlen(&p + 1));//跳过字符串，随机值
	//printf("%d\n", strlen(&p[0] + 1));//从b开始--5 




	//二维数组
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//12个整形元素大小--4x12=48字节

	//printf("%d\n", sizeof(a[0][0]));//第一行第一列的整形元素大小--4字节

	//printf("%d\n", sizeof(a[0]));//a[0]单独使用，第一行四个整形元素大小--16字节

	//printf("%d\n", sizeof(a[0]+1));
	////a[0]没有单独使用，a[0]为第一个元素地址，a[0]+1第一行第二个元素地址大小--8字节

	//printf("%d\n", sizeof(*(a[0]+1)));
	////未单独使用，a[0]第一个元素地址，a[0]+1第一行第二个元素地址，解引用元素大小--4字节

	//printf("%d\n", sizeof(a+1));
	////a没有单独放在sizeof内，a代表首元素地址（第一行地址），a+1第二行地址，大小--8字节

	//printf("%d\n", sizeof(*(a+1)));
	////a+1第二行地址,解引用，第二行元素大小--16字节

	//printf("%d\n", sizeof(&a[0]+1));
	////&a[0]第一行地址，&a[0]+1第二行地址大小--8字节

	//printf("%d\n", sizeof(*( & a[0] + 1)));
	////&a[0]第一行地址，&a[0]+1第二行地址，解引用元素大小--16字节

	//printf("%d\n", sizeof(*a));
	////a首元素地址（第一行元素地址），解引用，元素大小--16字节

	//printf("%d\n", sizeof(a[3]));
	////a[3]与a[0]相同，根据类型算出大小，不会真实访问/*---16字节



	//int a[5] = { 1,2,3,4,5 };//&a--整个数组地址
	//int* ptr = (int*)(&a + 1);//&a+1--跳过一个数组，取出的类型是数组指针，要强制类型转换
	//printf("%d,%d", *(a + 1), *(ptr - 1));


	//printf("%p\n", p + 0x1);//加了20个字节--0x100014
	//printf("%p\n", (unsigned long)p + 0x1);//转换类型后+1--0x100001
	//printf("%p\n", (unsigned int*)p + 0x1);//转换类型后+4--0x100004
	////结构体指针+1跳过20；
	////整形指针+1跳过4


	//int a[4] = { 1,2,3,4 };
	//int* ptr1 = (int*)(&a + 1);//&a+1--跳过数组
	//int* ptr2 = (int*)((int)a + 1);//一个字节给一个地址
	//printf("%x,%x", ptr1[-1], *ptr2);

	//int a[3][2] = { (0,1),(2,3),(4,5) };//小括号是逗号表达式1，3，5--1 3，5 0，0 0
	//int* p;
	//p = a[0];//a[0]未放在&和sizeof中，所以表示第一个元素地址*****************************
	//printf("%d", p[0]);//p[0]<==>a[0][0]<==>*(p+0)

	
	//int a[5][5];
	//int(*p)[4];
	//p = a;
	//printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	////p[4][2]<==>*(*(p+4)+2)  %p--16进制反码   %d--有符号整形


	//int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* ptr1 = (int*)(&aa + 1);//&aa--取整个数组的地址
	//int* ptr2 = (int*)(*(aa + 1));//aa--首元素地址，+1--第二行地址
	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	////ptr1为整形指针，-1向左移动一个整形位


	//char* a[] = { "work","at","alibaba" };//'\0'
	//char** pa = a;
	//pa++;//pa为指针，指向a
	//printf("%s\n", *pa);//pa是地址，*pa解引用访问元素



	//数据结构：画图分析char*  char**   char***
//	char* c[] = { "enter","new","point","first" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//cpp为地址，解引用后访问元素    c+2
//	printf("%s\n", *--* ++cpp + 3);
//	//上一行已经自加一次  c+1  ++  *  --  *  +3
//	printf("%s\n", *cpp[-2] + 3);
//	//**(cpp-2)+3,从c+1开始向后移动两个char***位，在c+3位置
//	printf("%s\n", cpp[-1][-1] + 1);
//	//cpp从c+1开始，*（*(cpp-1)-1)
//	return 0;
//}
//struct test
//{
//	int num;
//	char* pcname;
//	short sdate;
//	char cha[2];
//	short sba[4];
//}* p;//结构体指针变量p