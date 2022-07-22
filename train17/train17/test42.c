//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//#include<errno.h>
//#include<ctype.h>

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
//perror--把错误码转化为错误信息，打印错误信息

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
//  //打开文件失败会返回NULL
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//  //读文件
//  //关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//字符分类函数--多个，查表

//int main()
//{
//	char ch = '2';
//
//	//int ret = isdigit(ch);
//	//isdigit 数字字符返回非0值，不是数字字符返回0
//
//	int ret = islower(ch);
//	//islower 小写字符非0值，不是小写字符返回0
//	printf("%d\n", ret);
//	return 0;
//}


//字符转换函数--tolower   toupper

//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]));
//		{
//			arr[i] = tolower(arr[i]);//返回小写字符
//			printf("%c ", arr[i]);
//		}
//		i++;
//	}
//	return 0;
//}


//内存函数--memcpy  memmove  memcmp   memset

//memcpy

//void* my_memcpy(void* dest, const void* src, size_t num)
//    //void*--不可以直接解引用（不确定几个字节）
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;//强制类型转换是一种临时的状态
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 20);//20表示字节
//	//memcpy函数应该拷贝不重叠的内存
//	//memmove函数可以处理内存重叠情况
//	return 0;
//}


//memmove

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//
//	if (dest < src)
//	{
//		//从前向后拷贝
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;//char类型一个字节
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//从后向前拷贝
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//
//		}
//		return ret;
//	}
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//memcpy(arr1+2, arr1, 20);//20表示字节
//	//memcpy函数应该拷贝不重叠的内存
//	//memmove函数可以处理内存重叠情况
//	my_memmove(arr1 + 2, arr1, 20);
//	return 0;
//}


//memcmp

//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };//float占4个字节
//	float arr2[] = { 1.0,3.0 };
//	int ret = memcmp(arr1, arr2, 4);//4个字节
//	printf("%d\n", ret);
//	return 0;
//}


//memset--内存设置函数

//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 20);//把arr数组前20个字节设置成1
//	//以字节为单位设置内存
//	return 0;
//}

