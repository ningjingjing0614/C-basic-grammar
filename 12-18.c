#include<stdio.h>
#if 0

int main()//������A�е����ݺ�����B�е����ݽ��н�����������һ����
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	int b[] = {10,20,30,40,50,60,70,80,90};
	int i = 0, size = sizeof(a) / sizeof(int);
	for (i = 0; i < size; i++)
	{
		int tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
	for (i = 0; i < size; i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
	for (i = 0; i < size; i++)
	{
		printf("%d  ",b[i]);
	}
	printf("\n");
	return 0;
}
#endif
#if 0
//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
void init(int* arr, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}

//void print(int* arr, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		
//	}
//}

//ʵ��print()  ��ӡ�����ÿ��Ԫ��
void print (int* arr, int size)
{
	int i = 0;
	for(i = 0; i < size; i++)
	{
		printf("%d\n",arr[i]);
	}
}

//ʵ��reverse()  �����������Ԫ�ص����á�
void reverse(int* arr, int size)
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left ++;
		right --;
	}
}

int main()
{
	int arr[5] = {1,2,3,4,5};
	int i = 0;
	//init (arr, 5);
	reverse(arr, 5);
	print(arr, 5);
	for (i = 0; i < 5; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
#endif
