#define _CRT_SECURE_NO_WARNINGS 1
//字符串就是一串字符--用双引号括起来的一串字符
#include<stdio.h>
#include<string.h>
int main()
{
	//字符数组--一组相同类型的元素
	//字符串在结尾的位置隐藏了\0的字符
	//\0是字符串的结束标志
	//char arr[] = "hello";
	//双引号字符串，单引号字符
	char arr1[] = "abc";  //a,b,c,/0
	char arr2[] = { 'a', 'b', 'c' };  //a,b,c没有结束标志
	//%s表示打印字符串
	printf("%s\n", arr1);   
	printf("%s\n", arr2);
	//求字符串长度
	int len=strlen("abc");//string length要引用头文件
	printf("%d\n", len);
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//会出现一个随机值
return 0;
}