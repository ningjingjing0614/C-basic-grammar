#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 10; i ++)
	{
		printf ("%d\n",i);
	}
	return 0;
}




// //��ϵ���ʽ���� a>6 ʱ���ʽֵΪ�棬ִ��if��
//if (a>5) 
//	Statement;
// //�߼����ʽ��ֻҪa��b����һ��Ϊ�棬���Ϊ�棬ִ��if��
//if (a||b)
//	Statement;
// //�������ʽ��ֻҪ�ñ��ʽ��ֵ��0�����Ϊ�棬ִ��if��
//if (5-9)
//	Statement;
// //��ϵ���߼���ϱ��ʽ��ֻҪage>=60��age<=10����һ��Ϊ�棬���Ϊ�棬ִ��if��
//if (age>=60 ||age<=10)
//	Statement;
//δ���꣺С��18����ˣ����꣺����18����С��30�ꣻ׳�꣺����30����С��50�ꣻ
//���꣺����50����С��60�ꣻ���꣺����60�ꡣ
//int age = 0;
//printf ("�������������䣺");
//scanf ("%d",&age);

//if (age >= 18 && age < 30)
//{
//	printf ("%d�������꣡",age);
//}
//else if (age >= 30 && age < 50)
//{
//	printf ("%d����׳�꣡",age);
//}
//else if (age >= 50 && age < 60)
//{
//	printf ("%d�������꣡",age);
//}
//if (age >= 60)
//{
//	printf ("%d�������꣡",age);
//}
//int a = 0;
//int b = 2;
//if (a == 1)
//    if (b == 2)
//		printf ("hehe\n");
//else 
//	printf ("haha\n");
//int day = 0;
//	printf ("������day��");
//	scanf ("%d",&day);
//	switch (day)
//	{
//	case 1:
//		printf ("����һ\n");
//		break;		
//	case 2:
//		printf ("���ڶ�\n");
//		break;
//	case 3:
//		printf ("������\n");
//		break;
//	case 6:
//		printf ("������\n");
//		break;
//	case 7:
//		printf ("������\n");
//		break;
//	default:
//		printf("��������ִ��󣡣���");
//	}
	//while (i <= 10)
	//{
	//	i++;
	//	if ( i == 5)
	//		continue;
	//	printf ("%d\n",i);
	//	
	//}