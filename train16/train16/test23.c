//#define _CRT_SECURE_NO_WARNINGS 1
//�����ݹ飺���������̼���
//#include<stdio.h>
//int main()
//{
//	printf("programming\n");
//	main();
//	return 0;
//}


//����һ������ֵ������˳���ӡÿһλ��
//#include<stdio.h>
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
/*}*///�������������ǵ��ú�������Ҫ�ѳ������ꡣ
 //n=1��ӡ�����󣬻ص���һ���ĵ��ú�����n=12)��ʣ��������ꣻ�Դ����ƣ����ص��������������
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	�ݹ�--�����Լ������Լ�
//	print(num);//��ӡ����ÿһ����
//	return 0;
//}
//ջ���
//ջ�����ֲ������������β�
//��������̬�ڴ�
//��̬����ȫ�ֱ�������̬����
//�ݹ���룺�������ݹ飻������������ÿ���бƽ������������ݹ��β���̫��



//��д�������ܴ�����ʱ���������ַ�������
//#include<stdio.h>
//int my_strlen(char*str)
//{
//	if (*str != '\0')//�ַ���������־
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;//��һ���ַ�����'\0'
//}
//int main()
//{
//	char arr[] = "programming";
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));//ʵ�δ���ȥ������Ԫ�صĵ�ַ
//	return 0;
//}


//�ݹ������
//��n�Ľ׳�
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	//����
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}




//���n��쳲���������ǰ������Ϊ�����������������������
//#include<stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}//�����õݹ��ظ������Ч�ʵ�
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int Fib(int n)
//{
//	int a = 1, b = 1, c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}//Ч�ʸߵ������׼ȷ���������
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}