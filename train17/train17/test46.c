//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>


//x��ͼ��

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if(i+j==n-1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//7��������ȥ�������ͷ֣����ƽ���ɼ���������λС����0--100��

//int main()
//{
//	int score = 0;
//	int i = 0;
//	int sum = 0;
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//
//		sum += score;
//
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	printf("%.2f", (sum - max - min) / 5.0);
//	return 0;
//}



//����ĳ��ĳ���ж�����

//int main()
//{
//	int y = 0; 
//	int m = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	//                  1  2  3  4  5  6  7  8  9  10 11 12
//	while (scanf("%d %d", &y, &m) != EOF)
//	{
//		int day = days[m];
//		if (m == 2)
//			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//				day += 1;
//		printf("%d\n", day);
//	}
//	return 0;
//}



//�����������У���С���󣬲���һ�����ֺ���Ϊ����

//int main()
//{
//	int arr[51] = { 0 };
//	//����
//	int n = 0;
//	scanf("%d", &n);
//	//ָ�룿������
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("&d ", &arr[i]);
//
//	}
//	
//	//����������
//	int m = 0;
//	scanf("%d", &m);
//	//����
//	for (i = n - 1; i>= 0; i--)
//	{
//		if (arr[i] > m)
//			arr[i + 1] = arr[i];
//		else
//		{
//			arr[i+ 1] = m;
//			break;
//		}
//	}
//	if (i < 0)
//		arr[0] = m;
//	//���
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}