#define _CRT_SECURE_NO_WARNINGS 1
//һά����
//���飺��ͬԪ�صļ��ϣ��������ʽ
//��ȫ��ʼ��  int arr[10]={1,2,3,4,5,6,7,8,9,10}
//����ȫ��ʼ��  int arr[10]={1,2,3,4,5}  ʣ��Ĭ��Ϊ0
//char ch[5]="abc"  a b c \0 0
//char ch[]="abc"   a b c \0
#include<stdio.h>
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
//	printf("%p\n", 0x12);*///%p--����ַ��ʽ��ӡ--ʮ�����ƴ�ӡ
//
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//		//һά�������ڴ�����������ŵ�
//		//���������±����������ַ�ɵ͵��߱仯
//	}
//	return 0;
//}


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;//��������������Ԫ�ص�ַ**************************************
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}

