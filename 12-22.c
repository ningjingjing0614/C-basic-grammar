
#include <stdio.h>

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2+22+222+2222+22222


int main()
{
	//int c = 0x4E2D;
		//0100111000101101;
	printf("%c%c",0xD7D6);
	return 0;
}



#if 0
#include <string.h>
//写一个函数，可以逆序一个字符串的内容。
void reverse(char * str)
{
	char * left = str;
	char * right = str + strlen(str) - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left ++;
		right --;

	}
}


int main()
{
	char str[] = "hello";
	//char str1[3] = {'b','i','t'};
	int i = 0;
	reverse(str);
	//reverse(str1);
	for ( i = 0; i < strlen(str); i++)
	{
		printf("%c\n",str[i]);
	}
	return 0;
}
#endif



#if 0
void print(int * arr, int size)
{
	int * p = arr;
	int i = 0;
	for (i = 0; i < size; i ++)
	{
		printf("%d\n", *(p + i));
	}
}

int main()
{
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
	int arr[5] = {1,2,3,4,5};
	print(arr, 5);
	return 0;
}
#endif

	//int a = 0x11223344;
	//int b = 99999999;
		//char * tmp = left;
		//left = right;
		//right = tmp;
	//int a, b, sum;
	//printf("input a number:");
	//scanf ("%d", &a);
	//b = a * 11111;
	//sum = b + b/10 + b/100 + b / 1000 + b / 10000;
	//printf("%d\n",sum);