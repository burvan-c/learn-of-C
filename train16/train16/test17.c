//#define _CRT_SECURE_NO_WARNINGS 1
////do+循环语句；+while(表达式);   表达为真执行循环语句，为假跳出循环
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
//	//		break;     //break永久跳出循环
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
//	//		continue;   //跳出continue后面的循环语句，这里程序会死循环
//
//	//	printf("%d ", i);
//	//	i++;
//	//} while (i <= 10);
//
//
//	//实现n！
//	//int n;          //注意scanf函数的易错点
//	//scanf("%d", &n);
//	//int i=0,a=1;
//	//for (i = 1; i <= n; i++)//++i表示先自加再赋值
//	//{
//	//	a*=i;
//	//}
//	//printf("%d\n", a);
//
//
//	//计算1！+2!+.....+10!
//	//int n,a;          //注意scanf函数的易错点
//	////scanf("%d", &n);//scanf函数的数据类型后面一般不放入\n,若放入\n则scanf会换行继续读取数据************
//	//int i = 0, sum=0;
//	//for (n = 1; n <= 10; n++)
//	//{//计算阶乘前，把a初始为1
//	//	for (a = 1, i = 1; i <= n; i++)//++i表示先自加再赋值
//	//	{
//	//		a *= i;
//	//	}
//	//	sum += a;
//	//}
//	//printf("%d\n", sum);
//
//	//改进
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
//	//在有序数组中查找某个数字n
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr数组中查找k的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数
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
//			printf("找到了,下标是:%d\n", mid);
//			break;//跳出整个循环
//		}
//		if (left > right)
//		{
//			printf("找不到\n");//若k=17则找不到
//		}
//	}
//	
//	return 0;
//}
