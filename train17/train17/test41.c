#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>


//动态内存开辟
//p=malloc()
//申请：malloc     使用          释放：free(p)        p=NULL




//杨氏矩阵：从左到右递增，从上到下递增。编写程序查找某个数字是否存在,时间复杂度小于o(n)
//int find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	while (x < r && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int ret = find_num(arr, 3, 3, k);
//	if (ret == 1)
//	{
//		printf("可以找到\n");
//	}
//	else
//	{
//		printf("无法找到\n");
//	}
//	return 0;
//}



//int find_num(int arr[3][3], int *px, int *py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int x = 3, y = 3;
//	int ret = find_num(arr, &x, &y, k);
//	if (ret == 1)
//	{
//		printf("可以找到\n");
//		printf("下标为：%d %d\n", x, y);
//	}
//	else
//	{
//		printf("无法找到\n");
//	}
//	return 0;
//}




//左旋k个字符串
//void string_left_rotate(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//每次旋转一个字符
//		char tmp = *str;
//		//后面n-1字符前移
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//tmp放最后
//		*(str + n - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[10] = "abcdef";
//	//char* p = "abcdef";//err,常量字符串不可更改
//	int k = 2;
//	string_left_rotate(arr,k);
//	printf("%s\n", arr);
//	return 0;
//}



//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void string_left_rotate(char* str, int k)
//{
//	int n = strlen(str);
//	reverse(str,str+k-1);//左
//	reverse(str+k,str+n-1);//右
//	reverse(str,str+n-1);//整体
//}
//
//int main()
//{
//	char arr[10] = "abcdef";
//	//char* p = "abcdef";//err,常量字符串不可更改
//	int k = 2;
//	string_left_rotate(arr,k);
//	//三次逆序实现：左边逆序、右边逆序、整体逆序
//	printf("%s\n", arr);
//	return 0;
//}



//编程判断一个字符串是否是旋转后得到
int is_string_rotate(char* str1, char* str2)
{
	int i = 0;
	int n = strlen(str1);
	for (i = 0; i < n; i++)
	{
		//每次旋转一个字符
		char tmp = *str1;
		//后面n-1字符前移
		int j = 0;
		for (j = 0; j < n - 1; j++)
		{
			*(str1 + j) = *(str1 + j + 1);
		}
		//tmp放最后
		*(str1 + n - 1) = tmp;
		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
	}
	return 0;
}


int main()
{
	char arr1[] = "aabcd";
	char arr2[] = "bcdaa";
	int ret = is_string_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}