//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//结构成员访问操作符
//struct book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	struct book b = { "c语言","c0620",25 };
//	//结构体变量名.成员名
//	printf("书名:%s\n书号:%s\n价格:%d\n", b.name, b.id, b.price);
//	
//	printf("\n");
//
//	struct book* pb = &b;
//	printf("书名:%s\n书号:%s\n价格:%d\n", (*pb).name, (*pb).id, (*pb).price);
//
//	printf("\n");
//
//	printf("书名:%s\n书号:%s\n价格:%d\n", pb->name, pb->id, pb->price);
//
//	return 0;
//}





//整形提升
//int main()
//{
//	char a = 3;//00000011->00000……00000011(整形提升）
//	char b = 127;//01111111->00000……01111111（整形提升）
//	char c = a + b;//00000……10000010->10000010（截断）
//	//a与b是char类型，都是一个字节，没有达到int的4个字节的大小
//	//这里会发生整形提升
//	printf("%d\n", c);
//	//这里c整形提升，char为有符号位，第一位为符号位，故前面全补1
//	//10000010->11111……10000010（补码）->100000……01111110（原码）
//	printf("%d\n", sizeof(b));
//	//sizeof返回无符号整数用%u
//	return 0;
//}



//算术转换--操作数不同时进行转换




//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr, sz);
//	printf("\n");
//
//	reverse(arr, sz);
//	print(arr, sz);
//	printf("\n");
//
//	init(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}




//交换数组
//int main()
//{
//	int arr1[] = {1,3,5,7,9};
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}