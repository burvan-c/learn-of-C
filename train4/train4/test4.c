#define _CRT_SECURE_NO_WARNINGS 1
//转义字符--转变原来的意思
#include<stdio.h>
void main()
{
	/*printf("c\tburvan\ttest\n");
	printf("c\\tburvan\\ttest\n");
	printf("%c\n", '\'');
	printf("%c\n", '\"');*/
	printf("%c\n",'\150');//\ddd--d表示8进制数
	//8进制的150是十进制的104--对应ASCII码为h
	printf("%c\n", '\x50');//\xdd--d表示16进制数
	//16进制的50是10进制的80--对应ASCII码表P
	return 0;
}
//试一下其他功能