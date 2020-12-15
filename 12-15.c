#include <stdio.h>
int main()
{
	int num = 127;
	int count = 0;
	while (num)
	{
		num = num & (num - 1);
		count ++;
	}
	printf("%d\n",count);
	return 0;
}

//int a = -23.2;
//int b = a / -2;
//int c = a % -2;
//printf("%d\n",a);
//printf("%d\n",b);
//printf("%d\n",c);
/*int num = 127;
int i = 0;
int count = 0;
for (i = 0; i < 32; i ++)
{
if(num & (1 << i))
{
count ++;
}
}
printf("%d\n",count);*/