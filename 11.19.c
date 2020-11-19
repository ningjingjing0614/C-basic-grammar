#include<stdio.h>
int main()
{
	char ch = 67;
	printf("the code for %c is %d\n",ch, ch);
	return 0;
}


	//int fir = 99;
	//int sec = 999, thi = 9999;
	//int fou, fif= 999999999;//有效，但不建议
	////最后一行，fou和fif都声明了，但只初始化了fif

	//printf("%d",fif);

	//整数溢出是怎么样的？
/*int i =2147483647;
	unsigned int j =4294967295;
	double k = 0.123446665575542323;
	printf("%d  %d  %d  %d\n",i, i+1, i+2, i+3);
	printf("%u  %u  %u\n",j, j+1, j+2);
	printf("%lf",k);
	printf("%f");*/