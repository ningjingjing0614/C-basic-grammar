#include<stdio.h>
int main()
{
	int arr[3][4];
	int i,j;
	for (i = 0; i < 3; i ++)
	{
		for (j = 0; j < 4; j ++)
		{
			printf("arr[%d][%d] = %p  ",i, j, &arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

	//int arr[3][4] = {{1,2,3},4,5,6,7,8,9,10};
	//int i = 0;//i为行循环变量，用来控制行
	//int j = 0;//j为列循环变量，用来控制列
	//for (i = 0; i < 3; i ++)
	//{
	//	for(j = 0; j < 4; j ++)
	//	{
	//		printf("  %2d",arr[i][j]);
	//	}
	//	printf("\n");//每一行结束时，用来换行
	//}
