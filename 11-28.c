#if 0
#include<stdio.h>
int main()
{
	//最大公约数
	//辗转相除法
	//int num1 = 80,num2 = 40;
	//int num3 = 0;
	int num1, num2;
	printf ("请输入要求最大公约数的两个数\n");
	scanf ("%d%d",&num1, &num2);
	//if (num1 < num2)
	//{
	//	int tmp = num1;
	//	num1 = num2;
	//	num2 = tmp;
	//}

	while(1){
		int num3 = num1 % num2;//为什么不用交换大小数的位置就可以？？？
		if (num3 != 0)
		{
			num1 = num2;
			num2 = num3;

		}
		else
		{
			break;
		}
	}
	printf("%d\n",num2);
	return 0;
}
#endif
#if 0
#include<stdio.h>
int main()
{
	int year;
	//打印1000年到2000年之间的闰年
	//（闰年能被4整除&&不能被100整除）||能被400整除
	for (year = 1000; year <= 2000; year ++)
	{
		if ((year % 4 == 0 && year / 100 != 0) || year % 400 == 0)
		{
			printf("%d是闰年\n",year);
		}
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
	//写一个代码：打印100~200之间的素数
	int num, tmp;
	for (num = 100; num <201; num ++)
	{
		for (tmp = 2; tmp < num; tmp ++)
		{
			if (num % tmp == 0)
			{
				//printf("%d不是素数\n",num);
				break;
			}
			if (num == tmp + 1)
			{
				printf("%d是素数\n",num);
				//break;
			}
		}
	}
	return 0;
}
#endif





















	//int num4 = (999 % 89);
	//printf("%d",num4);
	/*int a = 19;
	int* pa = &a;
	printf("%d\n",pa);*/