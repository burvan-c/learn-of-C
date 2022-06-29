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
//	printf("%d\n", a);//这里打印的是全局变量
//	return 0;
//}




//两整数最小公倍数
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




//单词倒置，标点不倒置
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
	//scanf("%s", arr);//scanf读取字符串遇到空格时默认结束
	gets(arr);
	//三步翻转法
	//1.字符串整体翻转 2.每个单词逆序
	int len = strlen(arr);
	reverse(arr, arr + len - 1);

	char* start = arr;
	while (*start)
	{

	}
	return 0;
}

