//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//#include<errno.h>
//#include<ctype.h>

//�ַ���+�ڴ��������
//�ַ������Ⱥ���--strlen
//���Ȳ������Ƶ��ַ�������--strcpy  strcat   strcmp
//���������Ƶ��ַ�������--strncpy   strncat   strncmp
//�ַ�������--strstr    strtok
//������Ϣ����--strerror


//�ڴ��������--memcpy   memmove   memset    memcmp




//strlen

//int my_strlen(char* str)
//{
//	int count = 0;//������
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
//	int len = my_strlen(arr);//'\0'֮ǰ���ַ�����
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		//strlen��������Ϊsize_t�޷���������-3-->�޷������ǳ���
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
//	printf("%s\n", arr);//'\0'�ǿ�������ֹ����
//
//
//	char arr2[5] = { 0 };
//	char* p = "hello world";
//	strcpy(arr2, p);
//	printf("%s\n", arr2);//������Կ�����ȥ�������������
//	//Ŀ���ַ��������ǳ����ַ�������    �����������ַ��������޸�
//	return 0;
//}





//�ַ���׷��

//int main()
//{
//	char arr1[20] = "hello ";//ʶ��\0��,�ӡ�\0'��ʼ
//	char arr2[20] = "world";//���'\0'����ȥ
//	strcat(arr1,arr2);//�ַ���׷��
//	printf("%s\n", arr1);
//	return 0;
//}


//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//
//	assert(dest && src);
//	//��'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//���ַ���,����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;//����Ŀ��ռ���ʼ��ַ
//}
//int main()
//{
//	char arr1[20] = "hello ";//ʶ��\0��,�ӡ�\0'��ʼ
//	char arr2[20] = "world";//���'\0'����ȥ
//	//my_strcat(arr1, arr2);//�ַ���׷��
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}





//�ַ����Ƚϴ�С--��ǰ���Ƚ���ĸ��ASCIIֵ��С

//int main()
//{
//	int ret = strcmp("abbbc", "abc");//ASCIIֵb<c,���Է���ֵΪ-1
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


//strncpy--copy n���ַ�

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "xyz";
//	strncpy(arr1, arr2, 2);//arr2�ַ�����ʱ����'\0'
//	printf("%s\n", arr1);
//
//	return 0;
//}


//strncat--׷��n���ַ�

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 10);//��arr2��'\0'ֹͣ׷��
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


//strstr--��һ���ַ�����������һ���ַ���

//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "bcd";
//	//��arr1�в����Ƿ����arr2
//	char* ret = strstr(arr1, arr2);//���ص�һ�γ��ֵĵ�ַ���Ҳ������ؿ�ָ��
//	if (ret == NULL)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ���:%s\n", ret);
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
//	//��arr1�в����Ƿ����arr2
//	char* ret = my_strstr(arr1, arr2);//���ص�һ�γ��ֵĵ�ַ���Ҳ������ؿ�ָ��
//	if (ret == NULL)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ���:%s\n", ret);
//	}
//	return 0;
//}


//KMP�㷨--�ַ��������㷨


//strtok--�и��ַ���

//int main()
//{
//	char arr[] = "abc.def@xyz";
//	char* p = ".@";
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//	char* ret = NULL;
//	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//	//ע���÷�*********************************************************************
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//strerror--���ش������Ӧ�Ĵ�����Ϣ  char* strerror(int errnum);
//perror--�Ѵ�����ת��Ϊ������Ϣ����ӡ������Ϣ

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
//  //���ļ�ʧ�ܻ᷵��NULL
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//  //���ļ�
//  //�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�ַ����ຯ��--��������

//int main()
//{
//	char ch = '2';
//
//	//int ret = isdigit(ch);
//	//isdigit �����ַ����ط�0ֵ�����������ַ�����0
//
//	int ret = islower(ch);
//	//islower Сд�ַ���0ֵ������Сд�ַ�����0
//	printf("%d\n", ret);
//	return 0;
//}


//�ַ�ת������--tolower   toupper

//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]));
//		{
//			arr[i] = tolower(arr[i]);//����Сд�ַ�
//			printf("%c ", arr[i]);
//		}
//		i++;
//	}
//	return 0;
//}


//�ڴ溯��--memcpy  memmove  memcmp   memset

//memcpy

//void* my_memcpy(void* dest, const void* src, size_t num)
//    //void*--������ֱ�ӽ����ã���ȷ�������ֽڣ�
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;//ǿ������ת����һ����ʱ��״̬
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 20);//20��ʾ�ֽ�
//	//memcpy����Ӧ�ÿ������ص����ڴ�
//	//memmove�������Դ����ڴ��ص����
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
//		//��ǰ��󿽱�
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;//char����һ���ֽ�
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ����
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
//	//memcpy(arr1+2, arr1, 20);//20��ʾ�ֽ�
//	//memcpy����Ӧ�ÿ������ص����ڴ�
//	//memmove�������Դ����ڴ��ص����
//	my_memmove(arr1 + 2, arr1, 20);
//	return 0;
//}


//memcmp

//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };//floatռ4���ֽ�
//	float arr2[] = { 1.0,3.0 };
//	int ret = memcmp(arr1, arr2, 4);//4���ֽ�
//	printf("%d\n", ret);
//	return 0;
//}


//memset--�ڴ����ú���

//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 20);//��arr����ǰ20���ֽ����ó�1
//	//���ֽ�Ϊ��λ�����ڴ�
//	return 0;
//}

