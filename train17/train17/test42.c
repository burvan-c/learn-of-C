#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

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



