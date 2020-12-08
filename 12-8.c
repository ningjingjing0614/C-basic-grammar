#include <stdio.h>
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//
//如：输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。
#if 0
void mul (int fig)
{
	int i, j;
	for (i = 1; i <= fig; i ++)
	{
		for (j = 1; j <= i; j ++)
		{
			printf("%d * %d = %d  ", i, j, i*j);
		}
		printf("\n");
	}
}

//int main()
//{
//	int num = 9;
//	mul (num);
//	return 0;
//}

int mul2(int num)
{
	int j, m;
	for (j = 1; j <= num; j++)
	{
		m = j * num;
	}
	printf("\n");
	return m;
}
int main()
{
	int m, i, fig = 9;

	for (i = 1; i <= fig; i++)
	{
		m = mul2(i);

	}
	printf("%d",m);
	return 0;
}
#endif
#if 0
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//recursion
//int fun(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n * fun(n - 1);
//}
//int main()
//{
//	int ret = fun(5);
//	printf("%d\n",ret);
//	return 0;
//}
//non-recursion
int main()
{
	int num = 5, ret = 1;
	while (num > 0)
	{
		ret *= num;
		num --;
	}
	printf ("%d\n",ret);
	return 0;
}
#endif
#if 0
//递归和非递归分别实现strlen
////recursion
//int my_strlen(char * parr)
//{
//	if (*parr == '\0')
//	{
//		return 0;
//	}
//	return 1 + my_strlen(parr + 1);
//}
//#include<string.h>
//int main()
//{
//	char * arr = "1,2,3,4,5,6,7";
//	int ret = my_strlen(arr);
//	printf("%d\n",ret);
//	return 0;
//}
//non_recursion
#include<string.h>
int main()
{
	int i, ret = 0;
	char * arr = "1,2,883,4,5,6,7,8,9";
	while (*arr != '\0')
	{
		*arr ++;
		ret ++;
	}
	printf("%d\n",ret);
	return 0;
}
#endif
#if 0
//编写一个函数 reverse_string(char * string)（递归实现）
//
//实现：将参数字符串中的字符反向排列。
//
//要求：不能使用C函数库中的字符串操作函数。
int my_strlen(char * parr)
{
	if (*parr == '\0')
	{
		return 0;
	}
	return 1 + my_strlen(parr + 1);
}
//non_recursion
//void reverse_string(char * string)
//{
//
//	char * left = string;
//	char * right = string+my_strlen(string)-1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left ++;
//		right --;
//	}
//}
//int main()
//{
//	char arr[] = "hello   ";
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}
//recursion
//char reverse_string(char * string)
//{
//	char * left = string;
//	char * right = string + my_strlen(string) - 1;
//	if (left >= right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//	}
//	return 
//}
void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr+len-1);
	*(arr+len-1) = '\0';
	if(strlen(arr+1)>=2)
		reverse_string(arr+1);
	*(arr+len-1) = tmp;
}
int main()
{
	char arr[] = "hello   ";
	reverse_string(arr);
	printf("%s\n",arr);
	return 0;
}
#endif
#if 0
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
//
//输入：1729，输出：19

int DigitSum(int n)
{
	if (n < 9)
	{
		return n;
	}
	return DigitSum(n/10)+n%10;
}
int main()
{
	int num = 123456;
	printf("%d\n",DigitSum(num));
	return 0;
}
#endif
#if 0
//编写一个函数实现n的k次方，使用递归实现。
int my_pow(int n, int k)
{
	if (k != 0)
	{
		return n * my_pow(n,k - 1);	
	}
	return 1;
}
int main()
{
	int n = 2, k = 3;
	printf("%d\n",my_pow(n, k));
	return 0;
}
#endif
#if 0
//递归和非递归分别实现求第n个斐波那契数
//
//例如：
//
//输入：5  输出：5
//
//输入：10， 输出：55
//
//输入：2， 输出：1
//int fib(int n)
//{
//	if (n < 2)
//	{
//		return n;
//	}
//	return fib(n-1) + fib(n-2);
//}
int fib(int n)
{
	int i = 1, f0 = 0, f1 = 1, f2;
	if (n < 2)
	{
		return n;
	}
	while(i < n)
	{
		f2 = f0 + f1;
		f0 = f1;
		f1 = f2;
		i ++;
	}
	return f2;
}
int main()
{
	int n = 6;
	printf("%d\n",fib(n));
	return 0;
}
#endif
int main()
{
	printf("%#x",1000);
	return 0;
}