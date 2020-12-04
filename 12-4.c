#include <stdio.h>
int main()
{
	for ( ; ; )
	{
		printf ("HEHE\n");
	}
	return 0;
}





#if 0
#include <stdio.h>
int main()
{
	int i = 1;
	for (i = 1; i <= 10; i ++)
	{
		if (i == 5)
			break;
		printf ("%d\n",i);
	}
	return 0;
}
int i = 1;
for (i = 1; i <= 10; i ++)
{
	if (i == 5)
		continue;
	printf ("%d\n",i);
}
for ( ; ; )
{
	printf ("HEHE\n");
}
int x, y;
for (x =0, y = 0; x < 2 && y < 5; ++x, y++)
{
	printf("HEHE    ");//打印输出两个HEHE    HEHE
}
#endif