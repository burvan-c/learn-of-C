#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//int i;//ȫ�ֱ���������ʼ����Ĭ��Ϊ0
//int main()
//{
//	i--;//-1
//	//sizeof������Ϊunsigned int���ͣ�ȫ��ת��Ϊ�޷������αȽ�
//	if (i > sizeof(i))//4���ֽ�
//	{     //-1�޷������ǳ���
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}



//��sn=a+aa+aaa+aaaa+aaaaa��ǰ5��ͣ�aΪһ������
//int main()
//{
//	//��a��ɵ�ǰn���--���������
//	int a = 0, n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0, sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��
//int main()
//{
//	/*int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int* pend = arr + sz - 1;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}



//��ӡ0--100000֮�������ˮ�ɻ���
//ˮ�ɻ���--һ��nλ������λ���ֵ�n�η�֮�͵��ڸ�������

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.����i��λ��
//		int n = 1;
//		int tmp = i;//��ʼ��
//		while (tmp / 10)
//		{
//			n++;
//			tmp= tmp / 10;
//		}
//
//		//2.����i�Ĵη�֮��
//		tmp = i;//��ֵ���
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);//powΪ�⺯��
//			tmp = tmp / 10;
//		}
//
//		//3.�ж�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}



//int main()
//{
//	unsigned long pularray[] = { 6,7,8,9,10 };
//	unsigned long* pulptr;
//	pulptr = pularray;
//	*(pulptr + 3) += 3;
//	printf("%d %d\n", *pulptr, *(pulptr + 3));
//	return 0;
//} 



//��ӡ����
