#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//ָ�����

//һ��ָ�봫��
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//pΪһ��ָ��
//	print(p, sz);
//	return 0;
//}



//����ָ�봫��
//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	test(ppa);//����ָ�봫��
//	printf("%d\n", a);
//	return 0;
//}



//����ָ��--ָ������ָ��
//&������--ȡ�������ĵ�ַ
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main() 
//{
//	int x = 0, y = 0;
//	Add(x, y);
//	int (*pf)(int, int) = &Add;//����ָ��***************************
// *pf--����ָ�����
//	return 0;
//}



//void test(char* str)
//{
//
//}
//
//int main()
//{
//	void(*pt)(char*) = &test;//ָ��char*,��������void********************
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int (*pf)(int, int) = &Add;
//	//int ret = (*pf)(3, 5);//()���ȼ�����*
//
//	int (*pf)(int, int) = Add;//Add==pf
//	int ret = pf(3, 5);
//
//	printf("%d\n", ret);
//	return 0;
//}



//int main()
//{
//	(*(void(*)())0)();
//	//����0��ַ���ĺ���
//	//�����޲Σ���������Ϊvoid
//	//void(*)()--����ָ������
//	//(void(*)())0--��0����ǿ������ת����������Ϊһ��������ַ
//	//*(void(*)())0--��0��ַ������
//	//(*(void(*)())0)()--����0��ַ����
//
//
//
//	void(*signal(int, void(*)(int)))(int);
//	//void(*)(int)--����ָ������
//	//signal--������
//	//(int, void(*)(int))--signal������������
//	//signal�����ķ��������Ǻ���ָ��--void(*)(int)
//
//	
//
//	//typedef--�������ض���
//	typedef void(*pfun_t)(int);//��void(*)(int)�ĺ���ָ������������Ϊpfun_t
//	typedef unsigned int uint;
//
//
//	pfun_t signal(int, pfun_t);//����ȼ���void(*signal(int, void(*)(int)))(int)
//	return 0;
//}



//����ָ������--��ź���ָ�������
//����ָ��int*     ����ָ������int* arr[4]
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("1.add    2.sub\n");
	printf("1.add    2.sub\n");
	printf("    0.exit     \n");
}
int main()
{
	//int(*pf1)(int, int) = Add;//�������൱�ں�����ַ
	//int(*pf2)(int, int) = Sub;//�������൱�ں�����ַ
	//int(*pfarr[2])(int, int) = {pf1,Sub};
	////pfarr[2]��ʾ���飬ʣ�µ�int(*)(int,int)��ʾ����ָ��
	////����ָ��������ͬ���͵ĺ���ָ��


	//������--�ӡ������ˡ���
	int input = 0;
	do
	{
		menu();
		
		int x = 0, y = 0, ret = 0;
		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("ret=%d\n");
			break;
		case 2:
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("ret=%d\n");
			break;
		case 3:
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("ret=%d\n");
			break;
		case 4:
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("ret=%d\n");
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
		
	} while (input);

	return 0;
}