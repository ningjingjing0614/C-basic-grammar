#if 0
#include <stdio.h>
#define DEBUG
int main()
{
#ifdef DEBUG  //#define定义了DEBUG则执行下面一行代码
	printf("OK!定义了#define DEBUG\n");
#endif  //结束#ifdef DEBUG//不能没有，没有会报错中的 error C1070: **文件中的#if/#endif 对不匹配
#ifndef DEBUG  //#define没有定义DEBUG则执行下面一行代码
	printf("NO!没有定义#define DEBUG\n");
#endif  //结束#ifndef DEBUG//不能没有，没有会报错error C1004: 发现意外的文件尾
	return 0;
		int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i == 5)
			printf("%d\n",i);
	}


}
#endif
#include <stdio.h>
int main()
{
	int i = 10;
	if (i)
	{
		printf("%d\n",i);
	}
	printf("eeeeeeeeee%d\n",i);
	/*int i = 8;
	switch(i)
	{
	case 1:
		printf("%d\n",i);
		case 2:
		printf("%d\n",i);
		default:
			printf("eeeeeee");
		case 6:
		printf("%d\n",i);
		case 9:
		printf("%d\n",i);*/
		/*default:
			printf("eeeeeee");
	}*/
	return 0;
}