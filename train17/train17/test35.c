#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//ָ�����
//ָ���Ǳ�������ŵ�ַ
//ָ���СΪ4/8���ֽڣ�x32/x64)
//ָ�����;����˲����ͽ�����Ȩ��
//ָ������



//int main()
//{
//	//char ch = 'l';
//	//char* pc = &ch;
//
//	char* ps = "hello world";//����ĸh�ĵ�ַ����ps��
//	char arr[] = "hello world";//����ŵ���hello world
//
//	printf("%c\n", *ps);
//	printf("%s\n", ps);//�����ӡ�ַ�����ps����ʼλ��
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	const char *str3 = "hello world";
//	const char *str4 = "hello world";
//
//	if (str1 == str2)//str1��str2�ĵ�ַλ�ò�ͬ
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if(str3==str4)//���ַ���ַ��ͬ�������ַ���   ���ɸ��ģ�
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}



//ָ�����飺���ָ�������
//int main()
//{
//	int a[] = { 1,2,3,4,5 };//����ָ������
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//
//	int* arr[3]={a,b,c};//������Ϊ��Ԫ�ص�ַ
//
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *arr[i] + j);
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//����ָ�룺һ��ָ�룬ָ�������ָ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	//arr:������Ϊ��Ԫ�ص�ַ
//	int (*parr)[] = &arr;//ȡ������ĵ�ַ******************************************
//	//parr������ָ��-�������ĵ�ַ
//
//
//	double* d[5];
//	double* (*pd)[5] = &d;//double*��ָ������ͣ�(*pd)��ʾָ�룻[5]��ʾָ������Ϊ����
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//	//p1������ָ�룬p2������ָ�룬��Ȼarr��&arr��ַ��ͬ��p1��p2���Ͳ�ͬ
//
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	//�����ߵ�ַ��ͬ��������ȫ��ͬ
//
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//	//����һ������4���ֽ�
//
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//	//ֱ������һ������
//
//	return 0;
//}


//������Ϊ����Ԫ���׵�ַ��������������
//1.sizeof(������)--��������ʾ�������飬�������������С����λ�ֽ�
//2.&������--��������ʾ�������飬ȡ�����������С


int main()
{
	int arr[10] = { 0 };
	int(*pa)[10] = &arr;

	return 0;
}