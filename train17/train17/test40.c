//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
	//int a[] = { 1,2,3,4 };//���α���4���ֽ�
	//printf("%d\n", sizeof(a));//sizeof(��������--��������Ĵ�С
	//printf("%d\n", sizeof(a+0));//a+0:��һ��Ԫ�ص�ַ��x64Ϊ8���ֽ�
	//printf("%d\n", sizeof(*a));//*a:��һ��Ԫ�أ����α�����4���ֽ�
	//printf("%d\n", sizeof(a+1));//a+1:�ڶ���Ԫ�ص�ַ��x64Ϊ8���ֽ�
	//printf("%d\n", sizeof(a[1]));//�ڶ���Ԫ�أ����α�����4���ֽ�


	//printf("%d\n", sizeof(&a));//&a--�����ַ������һ����ַ�Ĵ�С
	//printf("%d\n", sizeof(*&a));//һ�������С
	//printf("%d\n", sizeof(&a+1));//һ����ַ��С
	//printf("%d\n", sizeof(&a[0]));//һ����ַ��С
	//printf("%d\n", sizeof(&a[0]+1));//һ����ַ��С

	



	/*char arr[] = { 'a','b','c','d','e','f' };*/
	//printf("%d\n", sizeof(arr));// ���������С--6���ַ�
	//printf("%d\n", sizeof(arr+0));// ������Ԫ�ص�ַ��С
	//printf("%d\n", sizeof(*arr));// ��Ԫ�ظ���
	//printf("%d\n", sizeof(arr[1]));// �ڶ���Ԫ��
	//printf("%d\n", sizeof(&arr));// һ����ַ��С
	//printf("%d\n", sizeof(&arr+1));// һ����ַ��С
	//printf("%d\n", sizeof(&arr[0]+1));// һ����ַ��С



	//printf("%d\n", strlen(arr));// ���ֵ
	//printf("%d\n", strlen(arr+0));// ���ֵ
	////printf("%d\n", strlen(*arr));// ����err
	////printf("%d\n", strlen(arr[1]));// ����err
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr+1));// ���ֵ
	//printf("%d\n", strlen(&arr[0]+1));// ���ֵ




	//char arr[] = {"abcdef"};//'\0'
	//printf("%d\n", sizeof(arr));// ���������С--7���ַ�7���ֽ� 
	//printf("%d\n", sizeof(arr+0));// ��Ԫ�ص�ַ��С--8���ֽ�
	//printf("%d\n", sizeof(*arr));//  ��һ��Ԫ�ش�С--1���ֽ�
	//printf("%d\n", sizeof(arr[1]));// �ڶ���Ԫ�ش�С--1���ֽ� 
	//printf("%d\n", sizeof(&arr));// һ����ַ��С--8���ֽ� 
	//printf("%d\n", sizeof(&arr+1));//  һ����ַ��С--8���ֽ� 
	//printf("%d\n", sizeof(&arr[0]+1));//  һ����ַ��С--8���ֽ� 



	//printf("%d\n", strlen(arr));//��6���ַ�--6
	//printf("%d\n", strlen(arr+0));//ͬ��һ��
	//printf("%d\n", strlen(*arr));//err 
	//printf("%d\n", strlen(arr[1]));// err
	//printf("%d\n", strlen(&arr));//ͬarr--6
	//printf("%d\n", strlen(&arr+1));//arr�¸�����--���ֵ 
	//printf("%d\n", strlen(&arr[0]+1));// ��b��ʼ���ַ�--5 



	//char* p = "abcdef";//'\0'
	//printf("%d\n", sizeof(p));// һ��ָ�루��ַ����С--8���ֽ�
	//printf("%d\n", sizeof(p+1));//��b)һ��ָ�루��ַ����С--8���ֽ� 
	//printf("%d\n", sizeof(*p));// *p<==>a,һ���ַ���С--1���ֽ�  
	//printf("%d\n", sizeof(p[0]));// a,һ���ַ���С--1���ֽ�  
	//printf("%d\n", sizeof(&p));// һ��ָ�루��ַ����С--8���ֽ� 
	//printf("%d\n", sizeof(&p+1));//  һ��ָ�루��ַ����С--8���ֽ� 
	//printf("%d\n", sizeof(&p[0]+1));// һ��ָ�루��ַ����С--8���ֽ�  


	//printf("%d\n", strlen(p));//��6���ַ�--6
	//printf("%d\n", strlen(p + 1));// ��b��ʼ--5
	////printf("%d\n", strlen(*p));// err 
	////printf("%d\n", strlen(p[0]));//  err
	//printf("%d\n", strlen(&p));//ͬp,��6���ַ�--6
	//printf("%d\n", strlen(&p + 1));//�����ַ��������ֵ
	//printf("%d\n", strlen(&p[0] + 1));//��b��ʼ--5 




	//��ά����
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//12������Ԫ�ش�С--4x12=48�ֽ�

	//printf("%d\n", sizeof(a[0][0]));//��һ�е�һ�е�����Ԫ�ش�С--4�ֽ�

	//printf("%d\n", sizeof(a[0]));//a[0]����ʹ�ã���һ���ĸ�����Ԫ�ش�С--16�ֽ�

	//printf("%d\n", sizeof(a[0]+1));
	////a[0]û�е���ʹ�ã�a[0]Ϊ��һ��Ԫ�ص�ַ��a[0]+1��һ�еڶ���Ԫ�ص�ַ��С--8�ֽ�

	//printf("%d\n", sizeof(*(a[0]+1)));
	////δ����ʹ�ã�a[0]��һ��Ԫ�ص�ַ��a[0]+1��һ�еڶ���Ԫ�ص�ַ��������Ԫ�ش�С--4�ֽ�

	//printf("%d\n", sizeof(a+1));
	////aû�е�������sizeof�ڣ�a������Ԫ�ص�ַ����һ�е�ַ����a+1�ڶ��е�ַ����С--8�ֽ�

	//printf("%d\n", sizeof(*(a+1)));
	////a+1�ڶ��е�ַ,�����ã��ڶ���Ԫ�ش�С--16�ֽ�

	//printf("%d\n", sizeof(&a[0]+1));
	////&a[0]��һ�е�ַ��&a[0]+1�ڶ��е�ַ��С--8�ֽ�

	//printf("%d\n", sizeof(*( & a[0] + 1)));
	////&a[0]��һ�е�ַ��&a[0]+1�ڶ��е�ַ��������Ԫ�ش�С--16�ֽ�

	//printf("%d\n", sizeof(*a));
	////a��Ԫ�ص�ַ����һ��Ԫ�ص�ַ���������ã�Ԫ�ش�С--16�ֽ�

	//printf("%d\n", sizeof(a[3]));
	////a[3]��a[0]��ͬ���������������С��������ʵ����/*---16�ֽ�



	//int a[5] = { 1,2,3,4,5 };//&a--���������ַ
	//int* ptr = (int*)(&a + 1);//&a+1--����һ�����飬ȡ��������������ָ�룬Ҫǿ������ת��
	//printf("%d,%d", *(a + 1), *(ptr - 1));


	//printf("%p\n", p + 0x1);//����20���ֽ�--0x100014
	//printf("%p\n", (unsigned long)p + 0x1);//ת�����ͺ�+1--0x100001
	//printf("%p\n", (unsigned int*)p + 0x1);//ת�����ͺ�+4--0x100004
	////�ṹ��ָ��+1����20��
	////����ָ��+1����4


	//int a[4] = { 1,2,3,4 };
	//int* ptr1 = (int*)(&a + 1);//&a+1--��������
	//int* ptr2 = (int*)((int)a + 1);//һ���ֽڸ�һ����ַ
	//printf("%x,%x", ptr1[-1], *ptr2);

	//int a[3][2] = { (0,1),(2,3),(4,5) };//С�����Ƕ��ű��ʽ1��3��5--1 3��5 0��0 0
	//int* p;
	//p = a[0];//a[0]δ����&��sizeof�У����Ա�ʾ��һ��Ԫ�ص�ַ*****************************
	//printf("%d", p[0]);//p[0]<==>a[0][0]<==>*(p+0)

	
	//int a[5][5];
	//int(*p)[4];
	//p = a;
	//printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	////p[4][2]<==>*(*(p+4)+2)  %p--16���Ʒ���   %d--�з�������


	//int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* ptr1 = (int*)(&aa + 1);//&aa--ȡ��������ĵ�ַ
	//int* ptr2 = (int*)(*(aa + 1));//aa--��Ԫ�ص�ַ��+1--�ڶ��е�ַ
	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	////ptr1Ϊ����ָ�룬-1�����ƶ�һ������λ


	//char* a[] = { "work","at","alibaba" };//'\0'
	//char** pa = a;
	//pa++;//paΪָ�룬ָ��a
	//printf("%s\n", *pa);//pa�ǵ�ַ��*pa�����÷���Ԫ��



	//���ݽṹ����ͼ����char*  char**   char***
//	char* c[] = { "enter","new","point","first" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//cppΪ��ַ�������ú����Ԫ��    c+2
//	printf("%s\n", *--* ++cpp + 3);
//	//��һ���Ѿ��Լ�һ��  c+1  ++  *  --  *  +3
//	printf("%s\n", *cpp[-2] + 3);
//	//**(cpp-2)+3,��c+1��ʼ����ƶ�����char***λ����c+3λ��
//	printf("%s\n", cpp[-1][-1] + 1);
//	//cpp��c+1��ʼ��*��*(cpp-1)-1)
//	return 0;
//}
//struct test
//{
//	int num;
//	char* pcname;
//	short sdate;
//	char cha[2];
//	short sba[4];
//}* p;//�ṹ��ָ�����p