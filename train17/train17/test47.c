#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//文件--使用文件将数据直接放到电脑硬盘上，数据永久化
//程序文件（.c   .obj   .exe）、数据文件（读取数据、输出内容）
//文件指针--FILE*pf
//FILE * fopen ( const char * filename, const char * mode );


//int main()
//{
//	FILE* pf = fopen("D:\\vs pratice C\\learn-of-C\\train17\\train17\\test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//
//	//关闭文件           int fclose ( FILE * stream )
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//文件的顺序读写和随机读写
//顺序读写函数 fgetc  fputc  fgets  fputs  fscanf  fprintf  fread  fwrite
//stdin--标准输入流--键盘
//stdout--标准输出流--屏幕
//stderr--标准错误流--屏幕

//int main()
//{
//	FILE* pf = fopen("D:\\vs pratice C\\learn-of-C\\train17\\train17\\test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	
//	char a;
//	char b = ' ';
//	for (a = 'A'; a <= 'Z'; a++)
//	{
//		fputc(a, pf);//写入文件
//		fputc(b, pf);
//	}
//	
//	fputc('h', stdout);//写入屏幕
//	fputc('\n', stdout);
//
//	//读文件
//	int ret = fgetc(stdin);//从键盘读取
//	printf("%c\n", ret);
//	ret = fgetc(pf);//从文件读取
//	printf("%c\n", ret);
//
//
//	//关闭文件           int fclose ( FILE * stream )
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char arr[10] = { 0 };
//	FILE* pf = fopen("D:\\vs pratice C\\learn-of-C\\train17\\train17\\test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件   char * fgets ( char * str, int num, FILE * stream )
//	fgets(arr, 3, pf);//给'\0'留一个位置，2个字符+'\0'=3
//	printf("%s\n", arr);
//
//	//写文件--按照行写'w'
//	/*fputs("hello\n", pf);
//	fputs("world", pf);*/
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//int main()
//{
//	struct S s = { "abcdefg",10,5.5f };
//	//对格式化的数据进行写文件
//	FILE* pf = fopen("D:\\vs pratice C\\learn-of-C\\train17\\train17\\test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);
//
//	//int printf(const char* format, ...);
//	//int fprintf(FILE * stream, const char* format, ...);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//int main()
//{
//	struct S s = { 0 };
//	//对格式化的数据进行写文件
//	FILE* pf = fopen("D:\\vs pratice C\\learn-of-C\\train17\\train17\\test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件
//	fscanf(pf, "%s %d %f", s.arr, &(s.num), &(s.sc));
//
//	//int scanf(const char* format, ...);
//	//int fscanf ( FILE * stream, const char * format, ... );
//
//	//打印
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//int main()
//{
//	struct S s = { 0 };
//	//二进制的读写
//	FILE* pf = fopen("D:\\vs pratice C\\learn-of-C\\train17\\train17\\test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//二进制写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//int main()
//{
//	struct S s = { 0 };
//	//二进制的读写
//	FILE* pf = fopen("D:\\vs pratice C\\learn-of-C\\train17\\train17\\test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//二进制读文件
//	fread(&s, sizeof(struct S), 1, pf);
//
//	//size_t fread ( const void * ptr, size_t size, size_t count, FILE * stream );
//
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}