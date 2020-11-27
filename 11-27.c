#include<stdio.h>
int main()
{
	int i;
	for (i = 1; i < 100; i++)
	{
		if ((i % 3) != 0)
		{;}
		else
		{
			printf("%d是3的倍数\n",i);
		}
	}
	return 0;
}


		//if ((i % 3) == 0)
		//{
		//	printf("%d是3的倍数\n",i);
		//}
		//else
		//{
		//	printf("%d不是3的倍数\n",i);
		//}
//#include<stdio.h>
//void change(int a, int b, int c)
//{
//	int d;
//	if (a <= b)
//	{
//		d = a;
//		a = b;
//		b = d;
//	}
//	if (b <= c)
//	{
//		d = b;
//		b = c;
//		c = d;
//	}
//	if (a <= c)
//	{
//		d = a;
//		a = c;
//		c = d;
//	}
//	printf("max = %d, mid = %d, min = %d\n",a,b,c);
//}
//int main()
//{
//	void change(int a, int b, int c);
//	int i,j,k;
//	scanf ("%d%d%d",&i,&j,&k);
//	change(i,j,k);
//	return 0;
//}
//
//
//
//
//
//	//if (a > b)
//	//{
//	//	if (a > c){
//	//		return a;
//	//	}
//	//	else
//	//	{
//	//		return c;
//	//	}
//	//}
//	//else
//	//{
//	//	if (b > c)
//	//	{
//	//		return b;
//	//	}
//	//	else
//	//	{
//	//		return c;
//	//	}
//	//}