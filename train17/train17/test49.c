//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<stddef.h>
//union un                     //������--��Ա����ͬһ�ռ�
//{
//	short s[7];//14->����->16(0-13ƫ����)
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
//	int a;//0-3ƫ����
//	char b;//4
//	//5--�˷�
//	short c;//6-7
//	short d;//8-9
//	//0--9,ռ10���ֽ�->����->12���ֽ�
//}AA_t;



//atoi--�ַ���ת��Ϊ����

//int main()
//{
//	char* p = "-1234";
//	int ret = atoi(p);
//	printf("%d\n", ret);
//	return 0;
//}



//�ҳ�ֻ����һ�ε�����

//void find(int arr[], int sz)
//{
//	//�����������
//	int i = 0, ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//����ret��һλΪ1
//	int pos = 0;
//	for (i = 0; i < 64; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//posΪ1��0���ڲ�ͬ��
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



//д���꣬ʹ�����Ķ�����������ż������
//int main()
//{
//	int num = 10;
//	int ret = ((num & 0xaaaaaaaa) >> 1 )+ ((num & 0x55555555) << 1);
//	printf("%d\n", ret);
//	return 0;
//}



//д���꣬����ṹ����ĳ����������׵�ַ��ƫ��
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