//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>


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


//int main()
//{
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));
//		//*pa--�൱��������������Ԫ�ص�ַ
//	}
//	return 0;
//}



//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//print2(int(*p)[5], int r, int c)//p��һά����ָ��
//{
//	int i = 0, j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));//*(p+i)ĳһ�е�һ��Ԫ�صĵ�ַ
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	/*print1(arr, 3, 5);*/
//	print2(arr, 3, 5);//arr����������ʾ��Ԫ�ص�ַ������һ�еĵ�ַ
//
//	return 0;
//}



//int arr[9];//��������
//int* parr1[9];//����ָ�������
//int(*parr2)[9];//����ָ�룬ָ��ָ��9��int����Ԫ�ص�����
//int(*parr3[10])[5];
////parr3�Ǵ洢����ָ������飬���10������ָ�룬ÿ������ָ��ָ��5��int����Ԫ�ص�����





//�������     ָ�����
//һά���鴫��
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//void test2(int *arr[20])
//{}
//void test2(int **arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//
//	return 0;
//}



//��ά���鴫��*******************************************************************
//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
////��ά���鴫���в���ʡ��
//
//void test(int (*arr)[5])//����ָ��--ָ���ַ
//{}
////void test(int *arr)//һάָ�루�����
////{}
////void test(int* arr[5])//ָ�����飨���������Ӧ����ָ��ָ���ַ��
////{}
////void test(int **arr)//����ָ�루��������ﲻ��Ҫ����ָ�룩
////{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//arr����������Ԫ�ص�ַ������һ�еĵ�ַ
//	return 0;
//}