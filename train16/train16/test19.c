//#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//#include<stdlib.h>
//
//int main()
//{
	//�Ӵ�С�����������
	/*int a = 0, b = 0, c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tmp;
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);*/



	//��ӡ1--100����3�ı���������
	/*int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (0 == i % 3)
		{
			printf("%d ", i);
		}
	}*/




	//�������������Լ��
	/*int m = 0, n = 0;
	scanf("%d%d", &m, &n);
	int max = (m > n) ? n : m;
	while (1)
	{
		if (0 == m % max && 0 == n % max)
		{
			printf("%d\n", max);
			break;
		}
		else
			max--;
	}*/



	//շת�����
	//int m = 0, n = 0;
	//scanf("%d%d", &m, &n);
	//int t = 0;
	//while (t = m % n)//%--ȡ��
	//{
	//	m = n;
	//	n = t;
	//}
	//printf("%d\n", n);
	//��С������=m*n/���Լ��




	//��ӡ1000--2000������
	/*int y = 0,count=0;
	for (y = 1000; y <= 2000; y++)
	{*/
		//�ж��Ƿ�Ϊ���꣨��4�������ܱ�100�������ܱ�400������
		/*if (((0==y%4)&&(0!=y%100)) || (0==y%400))
		{
			printf("%d ", y);
			count++;
		}
	}
	printf("\ncount=%d", count);*/



	//��ӡ100-200֮�������
	//int i = 0,count=0;
	//for (i = 101; i <= 200; i+=2)//�ų�ż��
	//{
	//	//2--i-1֮�������ȥ��i���Ƿ�������
	//	int j = 0;
	//	for (j = 2; j <i; j++)
	//	{
	//		if (0 == i % j)
	//		{
	//			break;//������һ��forѭ��
	//		}
	//	}
	//	if (i == j)
	//	{
	//		count++;
	//		printf("%d ", i);
	//	}
	//}
	//printf("\ncount=%d", count);



   //goto���,ֻ����һ����������ת��
   /*flag:
   printf("eheh\n");
   printf("ahah\n");
   goto flag;*/


    //�ػ�����ֻҪ����2�����ڹػ��������������ȡ���ػ�
	/*char input[20] = { 0 };
	system("shutdown -s -t 120");

	again:
	printf("����������������Թػ�\n");
	scanf("%s", input);
	if (strcmp(input,"������")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}*/


    /*char input[20] = { 0 };
	system("shutdown -s -t 120");

	while (1)
    {
		printf("����������������Թػ�\n");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
			{
				system("shutdown -a");
				break;
			}
	 }*/
		 
//	return 0;
//}