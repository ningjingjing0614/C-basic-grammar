#if 0
#include <stdio.h>
int main()//打印乘法口诀表
{
	int mult1, mult2;
	int ret = 1;
	for (mult1 = 1; mult1 < 10; mult1++)
	{
		for (mult2 = 1; mult2 < mult1 + 1; mult2++)
		{
			ret = mult1 * mult2;
			printf("%d * %d ==%2d\t",mult1, mult2, ret);
		}
		printf("\n\n");
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void print ()
{
	printf ("************************\n");
	printf ("************************\n");
	printf ("*******猜数字游戏*******\n");
	printf ("0：退出游戏^^1：开始游戏\n");
	printf ("************************\n");
	printf ("************************\n");
}
int game ()
{
	int gus, num;
	srand(time(0));
    num = rand()%101;
	while(1)
	{
	    scanf ("%d",&gus);
		if (gus < num)
		{
			printf ("哎呀！猜小了\n");
		}
		else if (gus > num)
		{
			printf ("哎呀！猜大了\n");
		}
		else
		{
			printf ("!!!正确!!!\n");
			print ();
			break;
		}
	}
	return 0;
}


int main()//猜数字游戏
{	
	int beg = 0;
	print ();
	do
	{
		scanf ("%d",&beg);
		if (beg == 0)
		{
			printf("byebye\n");
			break;
		}
		if (beg == 1)
		{
			printf("游戏开始，请输出您猜的数字:\n");
			game();
		}
		else
		{
			printf("重新输入0或1:\n");
		}
	}while(beg);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()//求10 个整数中最大值
{
	int i, k, tmp;
	int arr[10];
	for (k = 0; k < 10; k++)
	{
		printf("input ten numbers");
		scanf ("%d",&arr[k]);
	}
	for (i = 0; i < 10; i ++)
	{
		if (arr[0] < arr[i])
		{
			tmp = arr[0];
			arr[0] = arr[i];
			arr[i] = tmp;
		}
	}
	printf("%d",arr[0]);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()//编写程序数一下 1到 100 的所有整数中出现多少个数字9
{
	int i, ret = 0;
	for (i = 0; i < 100; i++)
	{
		if (i / 10 == 9)
		{
			printf("%5d\n",i);
			ret++;
		}
		if (i % 10 == 9)
		{
			printf("%5d\n",i);
			ret++;
		}
	}
	printf("%d\n",ret);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int  main()//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for(i=1; i<=100; i++)
	{
		sum += flag*1.0/i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
{
	int i;
	double k = 0.0;
	for (i = 1; i <101; i++)
	{
		if (i % 2 == 0)
		{
			k -= (1.0/i);
		}
		else
		{
			k += (1.0/i);
		}
	}
	printf("%lf",k\n);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()//编写代码在一个整形有序数组中查找具体的某个数要求：找到了就打印数字所在的下标，找不到则输出：找不到。
{
	int ret = 50;
	int i, mid;
	int left = 0;
	int arr[] = {45,46,47,48,49,50,51,52,53};
	int right = sizeof(arr)/sizeof(arr[0]);
	//printf("%d\n",right);
	while(left < right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > ret)
		{
			right = mid; 
		}
		else if (arr[mid] < ret)
		{
			left = mid; 
		}
		else
		{
			printf("找到了，下标是%d\n",mid);
			break;
		}
	}
	if(left >= right)
	{
		printf("没找到");
	}
	return 0;
}
#endif