//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>


//����ָ������--��ź���ָ�������
//����ָ��int*     ����ָ������int* arr[4]
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("1.add    2.sub\n");
//	printf("3.mul    4.div\n");
//	printf("    0.exit     \n");
//}
//int main()
//{
//	//int(*pf1)(int, int) = Add;//�������൱�ں�����ַ
//	//int(*pf2)(int, int) = Sub;//�������൱�ں�����ַ
//	//int(*pfarr[2])(int, int) = {pf1,Sub};
//	////pfarr[2]��ʾ���飬ʣ�µ�int(*)(int,int)��ʾ����ָ��
//	////����ָ��������ͬ���͵ĺ���ָ��
//
//
//	//������--�ӡ������ˡ���
//	int input = 0;
//	do
//	{
//		menu();
//		
//		int x = 0, y = 0, ret = 0;
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//
//			int(*pfarr[5])(int, int) = { NULL, Add,Sub,Mul,Div };
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = (pfarr[input])(x, y);
//			printf("ret=%d\n",ret);
//		}
//		else if(input==0)
//		{
//			printf("�˳�����\n");
//			break;//����ѭ��
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//		
//
//
//		
//	} while (input);
//
//	return 0;
//}



//ָ����ָ�������ָ��
//int(*P)(int, int);//����ָ��
//int(*p2[4])(int, int);//����ָ������
//int(*(*p3)[4])(int, int)=&p2;//p3��ָ����ָ�������ָ��




//�ص�����--һ��ͨ������ָ����õĺ���������ָ����Ϊ�������ݸ���һ������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("1.add    2.sub\n");
//	printf("3.mul    4.div\n");
//	printf("    0.exit     \n");
//}
//int Calc(int (*pf) (int,int))//AddΪ������ַ������ӦΪ����ָ��
//{
//	int x = 0, y = 0;
//	printf("����������������:>");			
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//int main()
//{
////	int(*pf1)(int, int) = Add;//�������൱�ں�����ַ
////	int(*pf2)(int, int) = Sub;//�������൱�ں�����ַ
////	int(*pfarr[2])(int, int) = {pf1,Sub};
//	//pfarr[2]��ʾ���飬ʣ�µ�int(*)(int,int)��ʾ����ָ��
//	//����ָ��������ͬ���͵ĺ���ָ��
//
//
//	//������--�ӡ������ˡ���
//	int input = 0;
//	do
//	{
//		menu();
//		
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			ret = Calc(Add);
//			printf("ret=%d\n",ret);
//			break;
//		case 2:
//			ret = Calc(Sub);
//
//			printf("ret=%d\n",ret);
//			break;
//		case 3:
//			ret = Calc(Mul);
//
//			printf("ret=%d\n",ret);
//			break;
//		case 4:
//			ret = Calc(Div);
//
//			printf("ret=%d\n",ret );
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//		
//	} while (input);
//
//	return 0;
//}



//qsort����ʹ��--����������**************************************************
 
 
 
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	//ð������
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}



//void qsort(void* base, //base��Ŵ����������е�һ������ĵ�ַ
//           size_t num, //����Ԫ�ظ���
//           size_t size,//������һ��Ԫ�ش�С����λ�ֽ�
//           int (*compar)(const void*, const void*)//�����Ƚϴ�����������2��Ԫ�صĺ���
//           );



//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	//��������
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	print_arr(arr, sz);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int sort_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//
//}
//
//void test2()
//{
//	//��qsort��������ṹ�庯��
//	struct Stu s[] = { {"zhangsan",30},{"lisi",34},{"wangwu",20}};
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	//����������
//    //qsort(s, sz, sizeof(s[0]), sort_by_age);
//
//	//������������
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}




//ģ��qsort����ʵ��ͨ��ð������
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//
//void bubble_sort(void* base,
//	int sz,
//	int width,
//	int(*cmp)(const void* e1, const void* e2)
//)
//{
//	int i = 0;
//	//���� 
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//��Ԫ�رȽ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}