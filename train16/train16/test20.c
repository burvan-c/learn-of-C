#define _CRT_SECURE_NO_WARNINGS 1
//#include<string.h>
//#include<stdio.h>


//int main()
//{
	//库函数
	//char arr1[20] = { 0 };
	//char arr2[] = "hello,mother fuck!";
	//strcpy(arr1, arr2);//(destination,source)source--copy-->destination
	//	printf("%s", arr1);


	//memset--内存设置
	/*char arr[] = "hello,mother fuck!";
	memset(arr, 'x', 5);
	printf("%s\n", arr);*/
		
//		return 0;
//}



//自定义函数
//get_max(int x,int y)     //自定义函数的形式参量***********************
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;          //这个函数要有返回值**************************将z返回给max
//}
//int main()
//{
//	int a = 10, b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}



//void swap(int x, int y)    //明显这个函数不需要返回值,void表示这个函数不反回值，不需要返回值
//{                           //传值调用
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//	//x,y,a,b的地址都不同，x,y的值交换了但没有返回给a,b.程序失败了
//}
//int main()
//{
//	int a = 10, b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	swap(a, b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}




//int main()
//{
//	int a = 10, b = 20;
//	int* pa = &a;//pa为一个指针变量，存放a的地址，*pa<==>a
//	*pa = 20;
//	printf("%d\n", a);//这里a==20
//	return 0;
//}



//void swap(int *pa, int *pb)    //明显这个函数不需要返回值,void表示这个函数不反回值，不需要返回值
//{                              //传址调用
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//	// 利用指针实现程序
//}
//int main()
//{
//	int a = 10, b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	swap(&a, &b);//这里即使形式参数与实际参数类型与名称相同，系统给的地址也是不同的
//	printf("交换后：a=%d b=%d\n", a, b);
//	//函数实际参数可以是常量、变量、表达式、函数，必须有确定的值
//	//形式参数是指函数名后面括号中的变量，只在调用时才分配内存单元，调用完成后自动销毁
//	return 0;
//}