#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//'a'--�ַ�a
//int main()
//{
//	//�ַ���
//	char ch = 'a';    //���ַ�a�ŵ�ch�ı����ռ���
//	//����
//	int age = 20;
//	//������
//	short int num = 10;
//	//������
//	long int size = 500;
//	//��������
//	long long int point = 80;
//	//�����ȸ�����
//	float weight = 12.5;
//	//˫���ȸ�����
//	double d = 1.2;
//	
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 100);
//	//sizeof - �ؼ��� - ������ - �������ͻ������ռ�ռ��С
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	//����һ������
//	//����  ����������=��������
//	int age = 21;
//	double weight = 73;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight); //int��%d,float��%f,double��%lf
//}

//
//int a = 100;
//int main()
//{
//	//�������ڲ����Ǿֲ�������a�����������ⲿΪȫ�ֱ���
//	int a = 13;
//	printf("%d\n", a);  //�ֲ���������
//		return 0;
//}//�������ȫ�ֱ�����ֲ���������д��һ��

//scanfΪ���뺯��
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int sum = 0;//�ȶ�������ٸ�ֵ
//	scanf("%d%d", &a, &b);//ע��scanf�����÷�
//	 sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//}



//������a�����ĸ�����ʶ���Ǹ��������a��������
//�ֲ����������򣺱������ھֲ���Χ
//ȫ�ֱ��������򣺳����ڶ���ʶ��
//int g_val = 2022;
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("burvan\n");
//	{
//		int a = 24;
//			printf("a=%d\n", a);
//			printf("2:%d\n", g_val);
//	}
//	printf("3:%d\n", g_val);
//	return 0;
//}




//��������
//�������������ڣ������Ĵ���������֮���ʱ���
//�ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ��������
//ȫ�ֱ������������ڣ��������������




//������
// 1.���泣����10����a',"abcdefg")
//2.const���εĳ�����
//int main()
//{
//	int num1 = 10;
//	num1 = 20;   //num1Ϊ����
//	printf("1:num1=%d\n", num1);
//	const int num2 = 30;
//	printf("2:num2=%d\n", num2);//num2�ǳ����������г����ԣ����ɱ��ı�
//	return 0;
//
//
//
//	int arr[10] = { 0 };//������10��Ԫ�أ�����Ϊ��ȷ���
//
//	int n = 10;
//	int arr[n] = { 0 };//nΪ�����������Ǵ�����
//
//	const int n = 10;  //n���Ǳ�������
//	int arr[n] = { 0 };//nΪ�����������Ǵ�����
//}
//3.#define����ı�ʶ������
//#define max 10000   //ע����ʽ,�����Ϊ��ʶ�����������ɸ���
//int main()
//{
//	int n = max;
//	printf("n=%d\n", n);
//	return 0;
//}
//4.ö�ٳ���
//����һһ�оٵĳ���
//enum sex    //enumΪö�ٹؼ��֣�enumerate  ö�٣�
//{
//	male,
//	female,
//	secret         //ö�����ͱ����Ŀ���ȡֵ
//};
//int main()
//{
//	enum sex s = male;
//
//	printf("%d\n", male);   //���Ϊ0��maleĬ�ϳ�ֵΪ0��������ֵΪ3�����3��ʼ��
//	printf("%d\n", female);  //���Ϊ1
//	printf("%d\n", secret);   //���Ϊ2
//
//	return 0;
//}