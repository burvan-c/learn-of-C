//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<stddef.h>
//union un                     //联合体--成员共用同一空间
//{
//	short s[7];//14->对齐->16(0-13偏移量)
//	int n;//4
//};
//int main()
//{
//	printf("%d\n", sizeof(union un));
//		return 0;
//}


//enum enum_a
//{
//	x1,//0
//	y1,//1
//	z1=255,
//	a1,//256
//	b1,//257
//};


//typedef struct
//{
//	int a;//0-3偏移量
//	char b;//4
//	//5--浪费
//	short c;//6-7
//	short d;//8-9
//	//0--9,占10个字节->对齐->12个字节
//}AA_t;



//atoi--字符串转换为整形

//int main()
//{
//	char* p = "-1234";
//	int ret = atoi(p);
//	printf("%d\n", ret);
//	return 0;
//}



//找出只出现一次的整数

//void find(int arr[], int sz)
//{
//	//所有数字异或
//	int i = 0, ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//计算ret哪一位为1
//	int pos = 0;
//	for (i = 0; i < 64; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//pos为1和0放在不同组
//	int num1 = 0, num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			num1 ^= arr[i];
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//	printf("%d %d\n", num1, num2);
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find(arr, sz);
//	return 0;
//}



//写个宏，使整数的二进制奇数与偶数互换
//int main()
//{
//	int num = 10;
//	int ret = ((num & 0xaaaaaaaa) >> 1 )+ ((num & 0x55555555) << 1);
//	printf("%d\n", ret);
//	return 0;
//}



//写个宏，计算结构体中某变量相对于首地址的偏移
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//#define OFFSETOF(struct_name,mem_name) (int)&(((struct_name*)0)->mem_name)
//int main()
//{
//	printf("%d\n", OFFSETOF(struct A, a));
//	printf("%d\n", OFFSETOF(struct A, b));
//	printf("%d\n", OFFSETOF(struct A, c));
//	printf("%d\n", OFFSETOF(struct A, d));
//	return 0;
//}