#define _CRT_SECURE_NO_WARNINGS 1
//ת���ַ�--ת��ԭ������˼
#include<stdio.h>
void main()
{
	/*printf("c\tburvan\ttest\n");
	printf("c\\tburvan\\ttest\n");
	printf("%c\n", '\'');
	printf("%c\n", '\"');*/
	printf("%c\n",'\150');//\ddd--d��ʾ8������
	//8���Ƶ�150��ʮ���Ƶ�104--��ӦASCII��Ϊh
	printf("%c\n", '\x50');//\xdd--d��ʾ16������
	//16���Ƶ�50��10���Ƶ�80--��ӦASCII���P
	return 0;
}
//��һ����������