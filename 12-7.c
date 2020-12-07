/*
#include <stdio.h>
 //apple为第一种选择，banana为第二种选择；...pear为第五种选择。
int main()
{
	double apple = 6.7;
    double banana = 6.8;
    double orage = 6.9;
    double strawberry = 7.0;
    double pear = 7.1;
double count = 0.0;
double result = 0.0;
int  choice = 0;
printf ("please input choice:(input a number)\n");
scanf("%d",&choice);
if (choice == 1){
	printf ("please input count:\n");
	scanf("%d",&count);
	result = count * 6.7;
	printf("result is %d\n",result);
}
if (choice == 2){
	printf ("please input count:\n");
	scanf("%d",&count);
	result = count * 6.8;
	printf("result is %d\n",result);
}
if (choice == 3){
	printf ("please input count:\n");
	scanf("%d",&count);
	result = count * 6.9;
	printf("result is %d\n",result);
}
if (choice == 4){
	printf ("please input count:\n");
	scanf("%d",&count);
	result = count * 7.0;
	printf("result is %d\n",result);
}
if (choice == 5){
	printf ("please input count:\n");
	scanf("%d",&count);
	result = count * 7.1;
	printf("result is %d\n",result);
}
return 0;
}

**/
#include <stdio.h>
int main()
{
char name[20];
int age = 0;
printf("请输入你的姓名：");
scanf("%s",&name);
scanf("%d",&age);
printf("Hello %s,your age is %d\n", name,age);
return 0;
}