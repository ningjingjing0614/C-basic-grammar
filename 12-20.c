#include<stdio.h>
int main()
{
	//int arr5[][3];//错误。编译器无法确定所需空间
    //int arr6[2][];//错误。缺少列下标，编译器无法确定所需空间
	int i, j;
	int arr1[2][3] = {1,2,3,4,5,6};
	int arr2[3][4] = {{1,2},{3,4}};
	int arr3[][5] = {{1,2,3},{4,5}};//表示这是一个2行5列的数组
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
//int arr[10] = {0};//数组的不完全初始化
////用sizeof操作符计算数组元素的个数
//int sz = sizeof(arr) / sizeof(arr[0]);
////对数组的内容复赋值，数组是使用下标来访问的，下标从0开始。
//int i = 0;//index做下标
//for(i = 0; i < 10; i++)
//{
//	//将数组的10个元素全部赋值为0~9
//	arr[i] = i;
//}
////输出打印数组的全部内容
//for(i = 0; i < 10; i++)
//{
//	printf("%3d",arr[i]);
//}
//printf("\n");
//printf("数组中元素的个数为：%d\n",sz);
//int arr[8] = {0};
//int i = 0;
//for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//{
//	//printf("&arr[%d] = %p\n",i, &arr[i]);
//	printf("%p  ", &arr[i]);
//}