#if 0
#include <stdio.h>
int main()//��ӡ�˷��ھ���
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
	printf ("*******��������Ϸ*******\n");
	printf ("0���˳���Ϸ^^1����ʼ��Ϸ\n");
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
			printf ("��ѽ����С��\n");
		}
		else if (gus > num)
		{
			printf ("��ѽ���´���\n");
		}
		else
		{
			printf ("!!!��ȷ!!!\n");
			print ();
			break;
		}
	}
	return 0;
}


int main()//��������Ϸ
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
			printf("��Ϸ��ʼ����������µ�����:\n");
			game();
		}
		else
		{
			printf("��������0��1:\n");
		}
	}while(beg);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()//��10 �����������ֵ
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
int main()//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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
int  main()//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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
int main()//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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
int main()//��д������һ���������������в��Ҿ����ĳ����Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
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
			printf("�ҵ��ˣ��±���%d\n",mid);
			break;
		}
	}
	if(left >= right)
	{
		printf("û�ҵ�");
	}
	return 0;
}
#endif