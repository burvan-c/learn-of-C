//#define _CRT_SECURE_NO_WARNINGS 1
////do+ѭ����䣻+while(���ʽ);   ���Ϊ��ִ��ѭ����䣬Ϊ������ѭ��
//#include<stdio.h>
//int main()
//{
//	/*int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);*/
//
//
//	//int i = 1;
//	//do
//	//{
//	//	if (5 == i)
//	//		break;     //break��������ѭ��
//
//	//	printf("%d ", i);
//	//	i++;
//	//} while (i <= 10);
//
//
//	//int i = 1;
//	//do
//	//{
//	//	if (5 == i)
//	//		continue;   //����continue�����ѭ����䣬����������ѭ��
//
//	//	printf("%d ", i);
//	//	i++;
//	//} while (i <= 10);
//
//
//	//ʵ��n��
//	//int n;          //ע��scanf�������״��
//	//scanf("%d", &n);//scanf�������������ͺ���һ�㲻����\n,������\n��scanf�ỻ�м�����ȡ����************
//	//int i=0,a=1;
//	//for (i = 1; i <= n; i++)//++i��ʾ���Լ��ٸ�ֵ
//	//{
//	//	a*=i;
//	//}
//	//printf("%d\n", a);
//
//
//	//����1��+2!+.....+10!
//	//int n,a;          //ע��scanf�������״��
//	////scanf("%d", &n);//scanf�������������ͺ���һ�㲻����\n,������\n��scanf�ỻ�м�����ȡ����************
//	//int i = 0, sum=0;
//	//for (n = 1; n <= 10; n++)
//	//{//����׳�ǰ����a��ʼΪ1
//	//	for (a = 1, i = 1; i <= n; i++)//++i��ʾ���Լ��ٸ�ֵ
//	//	{
//	//		a *= i;
//	//	}
//	//	sum += a;
//	//}
//	//printf("%d\n", sum);
//
//	//�Ľ�
//	/*int n=0, a=1;           
//	 	int i = 0, sum = 0;
//	for (n = 1; n <= 10; n++)
//	{ 
//		a *= n;
//		sum += a;
//	}
//	printf("%d\n", sum);*/
//
//
//	//�����������в���ĳ������n
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr�����в���k��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0, right = sz-1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���:%d\n", mid);
//			break;//��������ѭ��
//		}
//		if (left > right)
//		{
//			printf("�Ҳ���\n");//��k=17���Ҳ���
//		}
//	}
//	
//	return 0;
//}