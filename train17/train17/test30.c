//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//ָ��   ���     ��ַ
//int main()
//{
//	int a = 10;//aռ8���ֽ�
//	int* pa = &a;//�õ�����a��8���ֽ��е�һ���ֽڵĵ�ַ
//	*pa = 20;
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int* pa;
//	char* pb;
//	float* pc;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pb));
//	printf("%d\n", sizeof(pc));
//}



//ָ�����͵�����
//1.ָ�����;���ָ�������Ȩ�޴�С
//2.ָ�����;���ָ�벽����С
//int main()
//{
//	int a = 0x11223344;//1��16����λ����4��2����λ��������ֽ�
//	int* pa = &a;
//	//char* pa = &a;   int����8���ֽڣ�char����2���ֽ�
//	*pa = 0;
//
//
//
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//
//	printf("%p\n", p);
//	printf("%p\n", p+1);//+4
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//+1
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//Ұָ�룺ָ��ָ��λ�ò���֪
//int main()
//{
	//int* p;//pΪ�ֲ�ָ�����,�ֲ���������ʼ����Ĭ��Ϊ���ֵ
	//*p = 20;//�Ƿ������ڴ�

	//Խ�����
	/*int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 10; i += )
	{
		*p = i;
		p++;
	}
	return 0;*/
//}


//int* test()
//{
//	int a = 0;
//	return &a;//aΪ�ֲ�����������ʱ��ַ������
//}
//int main()
//{
//	int* p = test();
//		* p = 20;//�Ƿ�����
//	return 0;
//}


//ָ���ʼ��
//int main()
//{
//	int* p = NULL;
//	if (p != NULL)
//		*p = 10;
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//ָ��-ָ��=����ָ��֮���Ԫ�ظ���
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}


//ָ��������
//int main()
//{
//	int arr[10] = { 0 };
	//printf("%p\n", arr);//��������������Ԫ�ص�ַ
	//printf("%p", &arr[0]);


//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p<==>%p\n", &arr[i], p + i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	//arr[2]<==>*(p+2)<==>*(2+arr)==2[arr]
//	printf("%d\n", 2[arr]);
//	//[]�ǲ�������2��arr�ǲ�����
//	printf("%d\n", 2[p]);
//	return 0;
//}






//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;//һ��ָ��.paΪָ�����
//	int** ppa = &pa;//pa�Ǳ�����&paȡ��pa���ڴ��е���ʼ��ַ
//	//ppaΪ����ָ��
//	//*ppa==pa    *pa==a==**ppa
//	return 0;
//}





//ָ������---����Ϊ����
//int main()
//{
//	int arr[10];//��������
//	char ch[5];//�ַ�����
//
//	int* parr[5];//����ָ�������
//	char* pch[5];//�ַ�ָ�������
//	return 0;
//}
