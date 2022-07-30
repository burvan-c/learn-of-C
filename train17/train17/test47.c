//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>


//文件--使用文件将数据直接放到电脑硬盘上，数据永久化
//程序文件（.c   .obj   .exe）、数据文件（读取数据、输出内容）
//文件指针--FILE*pf
//FILE * fopen ( const char * filename, const char * mode );


//int main()
//{
//	FILE* pf = fopen("D:\\vs pratice C\\learn-of-C\\train17\\train17\\test.dat", "w");
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

//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//顺序读写函数 fgetc  fputc  fgets  fputs  fscanf  fprintf  fread  fwrite
//	return 0;
//}