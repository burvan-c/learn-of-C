#define _CRT_SECURE_NO_WARNINGS 1
//#include<string.h>
//#include<stdio.h>


//int main()
//{
	//�⺯��
	//char arr1[20] = { 0 };
	//char arr2[] = "hello,mother fuck!";
	//strcpy(arr1, arr2);//(destination,source)source--copy-->destination
	//	printf("%s", arr1);


	//memset--�ڴ�����
	/*char arr[] = "hello,mother fuck!";
	memset(arr, 'x', 5);
	printf("%s\n", arr);*/
		
//		return 0;
//}



//�Զ��庯��
//get_max(int x,int y)     //�Զ��庯������ʽ����***********************
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;          //�������Ҫ�з���ֵ**************************��z���ظ�max
//}
//int main()
//{
//	int a = 10, b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}



//void swap(int x, int y)    //���������������Ҫ����ֵ,void��ʾ�������������ֵ������Ҫ����ֵ
//{                           //��ֵ����
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//	//x,y,a,b�ĵ�ַ����ͬ��x,y��ֵ�����˵�û�з��ظ�a,b.����ʧ����
//}
//int main()
//{
//	int a = 10, b = 20;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	swap(a, b);
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}




//int main()
//{
//	int a = 10, b = 20;
//	int* pa = &a;//paΪһ��ָ����������a�ĵ�ַ��*pa<==>a
//	*pa = 20;
//	printf("%d\n", a);//����a==20
//	return 0;
//}



//void swap(int *pa, int *pb)    //���������������Ҫ����ֵ,void��ʾ�������������ֵ������Ҫ����ֵ
//{                              //��ַ����
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//	// ����ָ��ʵ�ֳ���
//}
//int main()
//{
//	int a = 10, b = 20;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	swap(&a, &b);//���Ｔʹ��ʽ������ʵ�ʲ���������������ͬ��ϵͳ���ĵ�ַҲ�ǲ�ͬ��
//	printf("������a=%d b=%d\n", a, b);
//	//����ʵ�ʲ��������ǳ��������������ʽ��������������ȷ����ֵ
//	//��ʽ������ָ���������������еı�����ֻ�ڵ���ʱ�ŷ����ڴ浥Ԫ��������ɺ��Զ�����
//	return 0;
//}