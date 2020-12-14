#include <stdio.h>
void my_swap(int * num1, int * num2)//不允许创建临时变量，交换两个整数的内容
{
		* num1 = *num1 ^ *num2;
		*num2 = *num1 ^ *num2;
		*num1 = *num1 ^ *num2;
}

int main()
{
	int num1 = 20,num2 = 30;
	my_swap (&num1, &num2);
	printf("%d  %d\n",num1, num2);
	return 0;
}



//int main()
//{
//	int a = 20;
//	int b = 30;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d  %d\n",a,b);
//	return 0;
//}
