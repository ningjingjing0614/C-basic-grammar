#include <stdio.h>
#if 0

int main()
{
	int i = 0;
	do
	{
		i ++;
		if (i == 5)
			continue;
		printf("%d\n",i);
	}while (i < 10);
	return 0;
}
void leap(int year)
{
	if ((year % 4 == 0 && year / 100 != 0) || year % 400 == 0)

	{
		printf("%d������\n",year);

	}
	else
		printf("%d��ƽ��\n",year);
}
int main()
{
	int ret = 2000;
	leap(ret);
	return 0;
}
#endif



//ʵ��һ���������ж�һ�����ǲ���������
//
//��������ʵ�ֵĺ�����ӡ100��200֮���������

void prime(int num)
{
	int num1;
	for (num1 = 2; num1 < num; num1 ++)
	{
		if (num % num1 == 0)
		{
			break;
		}
		if (num == num1 + 1)
		{
			printf("%d  ",num);
		}
	}
}
int main()
{
	int num;
	for (num = 100; num <= 200; num ++)
	{
		prime(num);
	}
	return 0;
}
#if 0
//ʵ��һ�������������������������ݡ�
void change(int * pa, int * pb)
{
	int tmp = *pa ^ *pb;
	*pa = tmp ^ *pa;
	*pb = tmp ^ *pb; 
}

int main()
{
	int num1 = 30, num2 = 40;
	printf("%d %d\n",num1, num2);
	change(&num1, &num2);
	printf("%d %d\n",num1, num2);
	return 0;
}
#endif

#if 0
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
void func (int n)
{
	if (n > 9)
	{
		func(n/10);
	}
	printf("%d\n",n%10);
}
int main()
{
	int n = 123456;
	func (n);
	return 0;
}
#endif