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




// //关系表达式，当 a>6 时表达式值为真，执行if体
//if (a>5) 
//	Statement;
// //逻辑表达式，只要a、b中有一个为真，结果为真，执行if体
//if (a||b)
//	Statement;
// //算术表达式，只要该表达式的值非0，结果为真，执行if体
//if (5-9)
//	Statement;
// //关系、逻辑混合表达式，只要age>=60或age<=10其中一项为真，结果为真，执行if体
//if (age>=60 ||age<=10)
//	Statement;
//未成年：小于18岁的人；青年：大于18岁且小于30岁；壮年：大于30岁且小于50岁；
//中年：大于50岁且小于60岁；老年：大于60岁。
//int age = 0;
//printf ("请输入您的年龄：");
//scanf ("%d",&age);

//if (age >= 18 && age < 30)
//{
//	printf ("%d岁是青年！",age);
//}
//else if (age >= 30 && age < 50)
//{
//	printf ("%d岁是壮年！",age);
//}
//else if (age >= 50 && age < 60)
//{
//	printf ("%d岁是中年！",age);
//}
//if (age >= 60)
//{
//	printf ("%d岁是老年！",age);
//}
//int a = 0;
//int b = 2;
//if (a == 1)
//    if (b == 2)
//		printf ("hehe\n");
//else 
//	printf ("haha\n");
//int day = 0;
//	printf ("请输入day：");
//	scanf ("%d",&day);
//	switch (day)
//	{
//	case 1:
//		printf ("星期一\n");
//		break;		
//	case 2:
//		printf ("星期二\n");
//		break;
//	case 3:
//		printf ("星期三\n");
//		break;
//	case 6:
//		printf ("星期六\n");
//		break;
//	case 7:
//		printf ("星期天\n");
//		break;
//	default:
//		printf("输入的数字错误！！！");
//	}
	//while (i <= 10)
	//{
	//	i++;
	//	if ( i == 5)
	//		continue;
	//	printf ("%d\n",i);
	//	
	//}