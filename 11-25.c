#include<stdio.h>

int main()
{
	int arr[] = {1,3,2,5,3,2,5,1,9};
	int i = 0,ret = 0;
	while (i < 9)
	{
		ret = ret ^ arr[i];
		i ++;
	}
	printf("%d\n",ret);
	return 0;
}
//#define N 10
//	printf ("%d\n",N);
//enum student
//{
//	NAME = 99,
//	SEX,
//	NUMBER
//};
	//printf("%d\n",array.length(arr));
	//double i = 45;
	//int NAME = 11;
	//printf ("%d\n",SEX);
	//enum student name; 
	//name = NAME;
	//printf("%d\n",name);
	//printf("%d\n",NUMBER);
	//printf("%d\n",SEX);
//double i = (double)12;
//	int i = 12.3;
//	int i = (double)12.46;
//	printf ("%d\n",i);
	//int i = 131;
	//printf("%d\n",(i ^ 1) << 7);