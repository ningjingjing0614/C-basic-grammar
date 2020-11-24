
#include <string.h>
#include <stdio.h>
int main()
{

	int a =15;
	char num1[] ="15";
	char num2[] ={1,2,3,4,5};
	printf("%d\n",sizeof(num1));//10
	printf("%d\n",strlen(num1));//9
	printf("%d\n",sizeof(num2));//10
	printf("%d\n",strlen(num2));//5
	return 0;
}
	//int a = 12;
	//{
	//	int v = 14;
	//	printf("%d\n",a);
	//	printf("%d\n",v);
	//}
	////printf("%d\n",v);
	//printf("%d\n",a);
	//printf("rrr");
	//char num1[10] ="1,2,3,4,5";
	//char num2[10] ={1,2,3,4,5};