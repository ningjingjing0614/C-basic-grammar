#include<stdio.h>
int mian()
{

	return 0;
}
//#if 0
////递归和非递归分别实现求第n个斐波那契数
////
////例如：
////
////输入：5  输出：5
////
////输入：10， 输出：55
////
////输入：2， 输出：1
////int fib(int n)
////{
////	if (n < 2)
////	{
////		return n;
////	}
////	return fib(n-1) + fib(n-2);
////}
//int fib(int n)
//{
//	int i = 1, f0 = 0, f1 = 1, f2;
//	if (n < 2)
//	{
//		return n;
//	}
//	while(i < n)
//	{
//		f2 = f0 + f1;
//		f0 = f1;
//		f1 = f2;
//		i ++;
//	}
//	return f2;
//}
//int main()
//{
//	int n = 6;
//	printf("%d\n",fib(n));
//	return 0;
//}
//#endif
//int main()
//{
//	printf("%#x",1000);
//	return 0;
//}