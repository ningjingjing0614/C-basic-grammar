#include<stdio.h>
int main()
{
	//int arr5[][3];//���󡣱������޷�ȷ������ռ�
    //int arr6[2][];//����ȱ�����±꣬�������޷�ȷ������ռ�
	int i, j;
	int arr1[2][3] = {1,2,3,4,5,6};
	int arr2[3][4] = {{1,2},{3,4}};
	int arr3[][5] = {{1,2,3},{4,5}};//��ʾ����һ��2��5�е�����
	char arr4[][5] = {"abct","dgf"};
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%c   ",arr4[i][j]);
		}
		printf("\n");
	}
	return 0;
}
//int a = 9, b = 3;
//char arr1[3] = {'a','d','f'};
//int arr2[5];
////double arr3[8];
//int arr3[4+5];
////int arr4[a+9];
//int arr5[] = {1,2,3,4,5};
//arr5[6] = 9;
//printf("%d\n",arr5[6]);
////char arr1[3] = {'a','d','f'};
////int arr2[5] = {1,2,3,4,5};
////double arr3[2+3] = {1.0,2.0,3.0,4.0,5.0};
////printf("%f\n",arr3[4]);
//int arr1[] = {1,2,3,4,5};
//char arr2[] = "asdf";
//printf("%c\n",arr2[2]);
//int arr[5] = {1,2,3};
//int arr[10] = {0};//����Ĳ���ȫ��ʼ��
////��sizeof��������������Ԫ�صĸ���
//int sz = sizeof(arr) / sizeof(arr[0]);
////����������ݸ���ֵ��������ʹ���±������ʵģ��±��0��ʼ��
//int i = 0;//index���±�
//for(i = 0; i < 10; i++)
//{
//	//�������10��Ԫ��ȫ����ֵΪ0~9
//	arr[i] = i;
//}
////�����ӡ�����ȫ������
//for(i = 0; i < 10; i++)
//{
//	printf("%3d",arr[i]);
//}
//printf("\n");
//printf("������Ԫ�صĸ���Ϊ��%d\n",sz);
//int arr[8] = {0};
//int i = 0;
//for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//{
//	//printf("&arr[%d] = %p\n",i, &arr[i]);
//	printf("%p  ", &arr[i]);
//}