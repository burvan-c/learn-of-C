#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//ָ�����

//һ��ָ�봫��
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
//	//pΪһ��ָ��
//	print(p, sz);
//	return 0;
//}



//����ָ�봫��
//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	test(ppa);//����ָ�봫��
//	printf("%d\n", a);
//	return 0;
//}



//����ָ��--ָ������ָ��
//&������--ȡ�������ĵ�ַ