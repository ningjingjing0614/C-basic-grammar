#if 0
#include <stdio.h>
int main()
{
	int day = 0;
	printf ("请输入day：");
	scanf ("%d",&day);
	switch (day)
	{
	case 1:
		printf ("星期一\n");
		break;		
	case 2:
		printf ("星期二\n");
		break;
	case 3:
		printf ("星期三\n");
		break;
	case 6:
		printf ("星期六\n");
		break;
	case 7:
		printf ("星期天\n");
		break;
	default:
		printf("输入的数字错误！！！");//当输入12367以外的其他值时就会执行default语句。
	}
	return 0;
}
#endif




#if 0
#include <stdio.h>
int main()
{
	int day = 0;
	printf ("请输入day：");
	scanf ("%d",&day);
	switch (day)
	{
	case 1:
		printf ("星期一\n");
		break;		
	case 2:
		printf ("星期二\n");
		break;
	case 3:
		printf ("星期三\n");
		break;
	case 6:
		printf ("星期六\n");
		break;
	case 7:
		printf ("星期天\n");
		break;
	}
	return 0;
}
#endif

