//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>


//�ļ�--ʹ���ļ�������ֱ�ӷŵ�����Ӳ���ϣ��������û�
//�����ļ���.c   .obj   .exe���������ļ�����ȡ���ݡ�������ݣ�
//�ļ�ָ��--FILE*pf
//FILE * fopen ( const char * filename, const char * mode );


//int main()
//{
//	FILE* pf = fopen("D:\\vs pratice C\\learn-of-C\\train17\\train17\\test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//
//	//�ر��ļ�           int fclose ( FILE * stream )
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//�ļ���˳���д�������д
//˳���д���� fgetc  fputc  fgets  fputs  fscanf  fprintf  fread  fwrite
//�����д���� fseek
//stdin--��׼������--����
//stdout--��׼�����--��Ļ
//stderr--��׼������--��Ļ

//int main()
//{
//	FILE* pf = fopen("D:\\vs pratice C\\learn-of-C\\train17\\train17\\test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	
//	char a;
//	char b = ' ';
//	for (a = 'A'; a <= 'Z'; a++)
//	{
//		fputc(a, pf);//д���ļ�
//		fputc(b, pf);
//	}
//	
//	fputc('h', stdout);//д����Ļ
//	fputc('\n', stdout);
//
//	//���ļ�
//	int ret = fgetc(stdin);//�Ӽ��̶�ȡ
//	printf("%c\n", ret);
//	ret = fgetc(pf);//���ļ���ȡ
//	printf("%c\n", ret);
//
//
//	//�ر��ļ�           int fclose ( FILE * stream )
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
//	//���ļ�   char * fgets ( char * str, int num, FILE * stream )
//	fgets(arr, 3, pf);//��'\0'��һ��λ�ã�2���ַ�+'\0'=3
//	printf("%s\n", arr);
//
//	//д�ļ�--������д'w'
//	/*fputs("hello\n", pf);
//	fputs("world", pf);*/
//
//	//�ر��ļ�
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
//	//�Ը�ʽ�������ݽ���д�ļ�
//	FILE* pf = fopen("D:\\vs pratice C\\learn-of-C\\train17\\train17\\test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//д�ļ�
//	fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);
//
//	//int printf(const char* format, ...);
//	//int fprintf(FILE * stream, const char* format, ...);
//
//	//�ر��ļ�
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
//	//�Ը�ʽ�������ݽ���д�ļ�
//	FILE* pf = fopen("D:\\vs pratice C\\learn-of-C\\train17\\train17\\test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//���ļ�
//	fscanf(pf, "%s %d %f", s.arr, &(s.num), &(s.sc));
//
//	//int scanf(const char* format, ...);
//	//int fscanf ( FILE * stream, const char * format, ... );
//
//	//��ӡ
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//	
//	//�ر��ļ�
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
//	//�����ƵĶ�д
//	FILE* pf = fopen("D:\\vs pratice C\\learn-of-C\\train17\\train17\\test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//������д�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
//	
//	//�ر��ļ�
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
//	//�����ƵĶ�д
//	FILE* pf = fopen("D:\\vs pratice C\\learn-of-C\\train17\\train17\\test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//�����ƶ��ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//
//	//size_t fread ( const void * ptr, size_t size, size_t count, FILE * stream );
//
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//scanf      fscanf      sscanf
//printf     fprintf     sprintf
//scanf--��Ա�׼����(����)�ĸ�ʽ���������--stdin
//fscanf--��������������ĸ�ʽ���������--stdout/�ļ�
//sscanf--���ַ�����Ϊ��ʽ������
//printf--��Ա�׼����ĸ�ʽ��������--stdout
//fprintf--�������������ĸ�ʽ��������--stdout/�ļ�
//sprintf--�Ѹ�ʽ������ת��Ϊ�ַ���

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
//	//sprintf--�Ѹ�ʽ������ת��Ϊ�ַ���
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//	//sscanf--���ַ�����Ϊ��ʽ������
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
//	return 0;
//}




//�ļ������д
//fseek--�����ļ�ָ��λ�ú�ƫ��������λ�ļ�ָ��
//int fseek(FILE* stream, long int offset, int origin);
//origin--SEEK_CUR(��ǰλ��)��SEEK_END(�ļ�ĩβ)��SEEK_SET(�ļ���ʼλ��)
//offset--�������ƫ��(��λΪ�ֽ�)��������ǰƫ��(��λΪ�ֽ�)
// 
//ftell--�����ļ�ָ���������ʼλ�õ�ƫ����
//long int ftell ( FILE * stream );
//
//rewind--���ļ�ָ��ص���ʼλ��
//void rewind ( FILE * stream );





//�������ļ�--�ļ������Զ�������ʽ�洢
//�ı��ļ�--�ļ���ASCII����ʽ�洢����


//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("D:\\vs pratice C\\learn-of-C\\train17\\train17\\test.txt", "wb");
//	//"wb"--��������
//	if (pf = NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&a, sizeof(int), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//feof   �������ж��ļ��Ƿ�������ڶ�ȡ�ļ��������ж��ǳɹ���������ʧ�ܽ���
//fgetc��ȡ��������EOF��������ȡ����ASCII��ֵ
//fgets��ȡ��������NULL��������ȡ���ؿռ���ʼλ��
//fread����ʵ�ʶ�ȡ������Ԫ�صĸ���������Ԫ�ظ���С��ָ��������ֹͣ��ȡ




//�ļ�������


