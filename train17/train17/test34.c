//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

//大端字节序：数据的低位字节序内容存放在高地址处，高位字节序的内容放在低地址处（由高到低）
//小端字节序：数据的低位字节序内容存放在低地址处，高位字节序的内容放在高地址处 （由低到高）


//int check_sys()
//{
//	//判断机器字节序
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//	return 0;
//}
//int main()
//{
//	//判断机器字节序
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	//11111111
//	signed char b = -1;
//	//11111111
//	unsigned char c = -1;
//	//11111111
//
//	printf("%d,%d,%d", a, b, c);
//
//	return 0;
//}
//char是有符号还是无符号取决于编译器
//int c语言规定是signed int


//int main()
//{
//	char a = -128;
//	//10000000
//	printf("%u\n", a);
//
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	//10000000
//	printf("%u\n", a);
//
//	return 0;
//}


//int main()
//{
//	int i = -20;
//   //不同类型用二进制补码计算
//	unsigned int j = 10;
//
//	//补码+补码    11111……11110110
//	//原码         10000……00001010
//	printf("%d\n", i + j);
//	return 0;
//}



//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		//无符号数恒大于等于0---死循环
//	}
//	return 0;
//}




//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//		//-1 -2……-128 127 126……3 2 1 0 -1 -2……-128 127 126……（圆圈循环）
//		//原码 反码 补码    计算机以补码形式储存数据，以原码形式打印数据
//	}
//	printf("%d\n", strlen(a));//找到\0->0
//	return 0;
//}



//unsigned char i = 0;
//
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//		//死循环--无符号char范围：0-255；条件永远满足
//
//		return 0;
//	}
//}






//浮点储存
//limits.h定义整形家族（int  short  char)取值范围
//float.h定义浮点型家族（float  double)取值范围

//int main()
//{
//	int n = 9;    //4byte
//	float* pfloat = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *pfloat);//4byte,以浮点数视角去看 0.000……1001*2^-126
//
//	*pfloat = 9.0;//
//	printf("%d\n", n);//S=0;E=3+127再转为二进制为10000010 M为00100……
//	printf("%f\n", *pfloat);
//	return 0;
//}




//任一二进制浮点数V可表示为（-1）^S*M*2^E
//(-1)^S表示符号位；S=0，V为正数；S=1，V为负数
//M表示有效数字，大于等于1，小于2
//2^E表示指数位


//E不全为0或不全为1，E为计算值减去127或1023
//E全为0时，真实值为1-127或1-1023
//E全为1时，若M全为0，表示无穷大


//5.5的二进制为101.1->1.011*2^2->(-1)^0*1.011*2^2
//int main()
//{
//	float f = 5.5f;
//	
//	return 0;
//}
