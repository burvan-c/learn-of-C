//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>

//int i;//全局变量，不初始化，默认为0
//int main()
//{
//	i--;//-1
//	//sizeof算出结果为unsigned int类型，全部转化为无符号整形比较
//	if (i > sizeof(i))//4个字节
//	{     //-1无符号数非常大
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}



//求sn=a+aa+aaa+aaaa+aaaaa的前5项和，a为一个数字
//int main()
//{
//	//由a组成的前n项和--不考虑溢出
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



//写一个函数打印arr数组的内容，不使用数组下标，使用指针
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



//打印0--100000之间的所以水仙花数
//水仙花数--一个n位数，各位数字的n次方之和等于该数本身

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.计算i的位数
//		int n = 1;
//		int tmp = i;//初始化
//		while (tmp / 10)
//		{
//			n++;
//			tmp= tmp / 10;
//		}
//
//		//2.计算i的次方之和
//		tmp = i;//赋值语句
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);//pow为库函数
//			tmp = tmp / 10;
//		}
//
//		//3.判断
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



//打印菱形
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	//上
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0;j < 2 * i - 1;j++)
//		{
//			printf("*");
//		}
//		//换行
//		printf("\n");
//	}
//
//	//下
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j <+i ; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j <2*(line-1-i); j++)
//		{
//			printf("*");
//		}
//		//换行
//		printf("\n");
//	}
//	return 0;
//}



//喝汽水，一瓶汽水一块钱，2个空瓶可换一瓶汽水，给20元，可以多少汽水（编程）
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if (money > 0)
//	{
//	 total = 2 * money - 1;
//	}
//
//	//int total = money;
//	//int empty = money;
//	////置换
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//
//	//}
//
//	printf("%d\n", total);
//	return 0;
//}






//调整数组，使奇数全部位于偶数前面
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从前往后找偶数
//		while ((left<right)&&(arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从后往前找奇数
//		while ((left<right)&&(arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//各自找到,判断，交换
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print(int arr[], int sz)
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
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}