//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//�ṹ��Ա���ʲ�����
//struct book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	struct book b = { "c����","c0620",25 };
//	//�ṹ�������.��Ա��
//	printf("����:%s\n���:%s\n�۸�:%d\n", b.name, b.id, b.price);
//	
//	printf("\n");
//
//	struct book* pb = &b;
//	printf("����:%s\n���:%s\n�۸�:%d\n", (*pb).name, (*pb).id, (*pb).price);
//
//	printf("\n");
//
//	printf("����:%s\n���:%s\n�۸�:%d\n", pb->name, pb->id, pb->price);
//
//	return 0;
//}





//��������
//int main()
//{
//	char a = 3;//00000011->00000����00000011(����������
//	char b = 127;//01111111->00000����01111111������������
//	char c = a + b;//00000����10000010->10000010���ضϣ�
//	//a��b��char���ͣ�����һ���ֽڣ�û�дﵽint��4���ֽڵĴ�С
//	//����ᷢ����������
//	printf("%d\n", c);
//	//����c����������charΪ�з���λ����һλΪ����λ����ǰ��ȫ��1
//	//10000010->11111����10000010�����룩->100000����01111110��ԭ�룩
//	printf("%d\n", sizeof(b));
//	//sizeof�����޷���������%u
//	return 0;
//}



//����ת��--��������ͬʱ����ת��




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




//��������
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