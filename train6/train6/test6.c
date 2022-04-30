#define _CRT_SECURE_NO_WARNINGS 1
//函数
#include<stdio.h>
//int main()
//{
//	int x, y, sum;
//	scanf("%d%d", &x, &y);
//	/*sum = x + y;*/
//	//用函数方式
//	sum = add(x, y);     //实际参量
//	printf("%d\n", sum);
//	return 0;
//}
//add(int a,int b)       //形式参量
//{
//	int c;
//	c = a+ b;
//	return c;         //将c还回给sum
//}


//数组--一组相同类型元素的集合
int main()
{
	int arr[5] = { 1,2,3,4,5 };//数组用下标访问0,1,2,3,4
	char ch[5] = { 'a','b','c' };//不完全初始化，剩余默认为0
	int i=0;
	while (i < 5)//循环语句
	{
		printf("%d\n", arr[i]);//输出下标对应的元素
		i++;       //自加
	}
	return 0;
}
