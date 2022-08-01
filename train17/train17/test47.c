//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>


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
//随机读写函数 fseek
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



//scanf      fscanf      sscanf
//printf     fprintf     sprintf
//scanf--针对标准输入(键盘)的格式化输入语句--stdin
//fscanf--针对所有输入流的格式化输入语句--stdout/文件
//sscanf--把字符串读为格式化数据
//printf--针对标准输出的格式化输出语句--stdout
//fprintf--针对所有输出流的格式化输出语句--stdout/文件
//sprintf--把格式化数据转化为字符串

//struct S
//{
//	char arr[10];
//	int age;
//	float f;
//};
//int main()
//{
//	struct S s = { "hello", 10, 5.4f };
//	struct S tmp = { 0 };
//
//	char buf[100] = { 0 };
//	//sprintf--把格式化数据转化为字符串
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//	//sscanf--把字符串读为格式化数据
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
//	return 0;
//}




//文件随机读写
//fseek--根据文件指针位置和偏移量来定位文件指针
//int fseek(FILE* stream, long int offset, int origin);
//origin--SEEK_CUR(当前位置)、SEEK_END(文件末尾)、SEEK_SET(文件起始位置)
//offset--正数向后偏移(单位为字节)，负数向前偏移(单位为字节)
// 
//ftell--返回文件指针相对于起始位置的偏移量
//long int ftell ( FILE * stream );
//
//rewind--让文件指针回到起始位置
//void rewind ( FILE * stream );





//二进制文件--文件数据以二进制形式存储
//文本文件--文件以ASCII码形式存储数据


//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("D:\\vs pratice C\\learn-of-C\\train17\\train17\\test.txt", "wb");
//	//"wb"--读二进制
//	if (pf = NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fwrite(&a, sizeof(int), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//feof   不用于判断文件是否结束；在读取文件结束后判断是成功结束还是失败结束
//fgetc读取结束返回EOF，正常读取返回ASCII码值
//fgets读取结束返回NULL，正常读取返回空间起始位置
//fread返回实际读取到完整元素的个数，完整元素个数小于指定个数，停止读取




//文件缓冲区


