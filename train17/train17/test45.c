#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//��̬�ڴ濪��--���Ը�������ı��ڴ��С
//ջ�����ֲ������������β�
//��������̬�ڴ濪�� malloc  calloc  free  realloc
//��̬������̬������ȫ�ֱ���


//malloc free

//void* malloc(size_t size)
//int main()
//{
//	//int arr[10];//ջ��
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(10 * sizeof(int));//void*
//	//ʹ�ö�̬�ڴ�ռ�
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//p[i]<==>*(p+i)
//	}
//	//���տռ�
//	free(p);
//	p = NULL;
//	return 0;
//}


//calloc
//void* calloc(size_t num, size_t size);