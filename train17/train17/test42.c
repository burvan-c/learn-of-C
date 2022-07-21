#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//字符串+内存操作函数
//字符串长度函数--strlen
//长度不受限制的字符串函数--strcpy  strcat   strcmp
//长度受限制的字符串函数--strncpy   strncat   strncmp
//字符串查找--strstr    strtok
//错误信息报告--strerror


//内存操作函数--memcpy   memmove   memset    memcmp




//strlen

//int my_strlen(char* str)
//{
//	int count = 0;//计算器
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	//char arr[] = { 'a','b','c' };
//	int len = my_strlen(arr);//'\0'之前的字符个数
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		//strlen返回类型为size_t无符号整数，-3-->无符号数非常大
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}


//strcpy

//int main()
//{
//	char arr[20] = { 0 };
//	strcpy(arr, "hello");
//	printf("%s\n", arr);//'\0'是拷贝的终止条件
//
//
//	char arr2[5] = { 0 };
//	char* p = "hello world";
//	strcpy(arr2, p);
//	printf("%s\n", arr2);//这里可以拷贝过去，但会出现问题
//	//目标字符串不可是常量字符串（“    ”），常量字符串不可修改
//	return 0;
//}





//字符串追加

//int main()
//{
//	char arr1[20] = "hello ";//识别‘\0’,从‘\0'开始
//	char arr2[20] = "world";//会把'\0'带过去
//	strcat(arr1,arr2);//字符串追加
//	printf("%s\n", arr1);
//	return 0;
//}


//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//
//	assert(dest && src);
//	//找'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//加字符串,包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;//返回目标空间起始地址
//}
//int main()
//{
//	char arr1[20] = "hello ";//识别‘\0’,从‘\0'开始
//	char arr2[20] = "world";//会把'\0'带过去
//	//my_strcat(arr1, arr2);//字符串追加
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}





//字符串比较大小--从前向后比较字母的ASCII值大小

//int main()
//{
//	int ret = strcmp("abbbc", "abc");//ASCII值b<c,所以返回值为-1
//	printf("%d\n", ret);
//	return 0;
//}


int my_strcmp(char* s1, char* s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;

	}
	return *s1 - *s2;
}

int main()
{
	char* p = "abcdef";
	char* q = "abbbbb";
	int ret = my_strcmp(p, q);

	if (ret > 0)
	{
		printf("p>q\n");
	}
	else if (ret < 0)
	{
		printf("p<q\n");

	}
	else
	{
		printf("p==q\n");
	}
	return 0;
}



