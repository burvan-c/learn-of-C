#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//void main()
//{
//	fib(8);
//	printf("%d", cnt);
//}


//int a = 1;
//
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//
//int main()
//{
//	/*int x = 1;
//	do {
//		printf("%2d\n", x++);
//	} while (x--);*/
//
//
//	test();
//	printf("%d\n", a);//�����ӡ����ȫ�ֱ���
//	return 0;
//}




//��������С������
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int m = a>b?a:b;
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			printf("%d\n", m);
//			break;
//		}
//		m++;
//	}
//	return 0;
//}




//���ʵ��ã���㲻����
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	//scanf("%s", arr);//scanf��ȡ�ַ��������ո�ʱĬ�Ͻ���
	gets(arr);
	//������ת��
	//1.�ַ������巭ת 2.ÿ����������
	int len = strlen(arr);
	reverse(arr, arr + len - 1);

	char* start = arr;
	while (*start)
	{

	}
	return 0;
}

