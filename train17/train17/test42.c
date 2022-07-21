#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>

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


//int my_strcmp(char* s1, char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	char* p = "abcdef";
//	char* q = "abbbbb";
//	int ret = my_strcmp(p, q);
//
//	if (ret > 0)
//	{
//		printf("p>q\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p<q\n");
//
//	}
//	else
//	{
//		printf("p==q\n");
//	}
//	return 0;
//}


//strncpy--copy n个字符

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "xyz";
//	strncpy(arr1, arr2, 2);//arr2字符不够时补上'\0'
//	printf("%s\n", arr1);
//
//	return 0;
//}


//strncat--追加n个字符

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 10);//到arr2的'\0'停止追加
//	printf("%s\n", arr1);
//
//	return 0;
//}


//strncmp

//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcxyz";
//	int ret = strncmp(p, q, 4);
//	printf("%d\n", ret);
//
//	return 0;
//}


//strstr--在一个字符串中找另外一个字符串

//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "bcd";
//	//在arr1中查找是否包含arr2
//	char* ret = strstr(arr1, arr2);//返回第一次出现的地址，找不到返回空指针
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了:%s\n", ret);
//	}
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1&&*s2&&(*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "bcd";
//	//在arr1中查找是否包含arr2
//	char* ret = my_strstr(arr1, arr2);//返回第一次出现的地址，找不到返回空指针
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了:%s\n", ret);
//	}
//	return 0;
//}


//KMP算法--字符串查找算法


//strtok--切割字符串

//int main()
//{
//	char arr[] = "abc.def@xyz";
//	char* p = ".@";
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//	char* ret = NULL;
//	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//	//注意用法*********************************************************************
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//strerror--返回错误码对应的错误信息  char* strerror(int errnum);

//int main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));
//
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



