#if 0
#include<stdio.h>
int main()
{
	//���Լ��
	//շת�����
	//int num1 = 80,num2 = 40;
	//int num3 = 0;
	int num1, num2;
	printf ("������Ҫ�����Լ����������\n");
	scanf ("%d%d",&num1, &num2);
	//if (num1 < num2)
	//{
	//	int tmp = num1;
	//	num1 = num2;
	//	num2 = tmp;
	//}

	while(1){
		int num3 = num1 % num2;//Ϊʲô���ý�����С����λ�þͿ��ԣ�����
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
	//��ӡ1000�굽2000��֮�������
	//�������ܱ�4����&&���ܱ�100������||�ܱ�400����
	for (year = 1000; year <= 2000; year ++)
	{
		if ((year % 4 == 0 && year / 100 != 0) || year % 400 == 0)
		{
			printf("%d������\n",year);
		}
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
	//дһ�����룺��ӡ100~200֮�������
	int num, tmp;
	for (num = 100; num <201; num ++)
	{
		for (tmp = 2; tmp < num; tmp ++)
		{
			if (num % tmp == 0)
			{
				//printf("%d��������\n",num);
				break;
			}
			if (num == tmp + 1)
			{
				printf("%d������\n",num);
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