#include <stdio.h>
#define A 1
#define B (A + 3)
#define C A/B * 3//这时C表示1/(1+3)*3
int main ()
{
	printf("%d\n",1/1+3*3);
	printf("%d\n",C);
	return 0;
}
#if 0
#include <stdio.h>
#define ADD(x,y) ((x) + (y))
//int add(int x, int y)
//{
//	return (x + y);
//}
int main()
{
	int sum = ADD(2, 3);
	printf("sum:%d\n",sum);
	sum = 10 * ADD(2, 3);
	printf("10sum:%d\n",sum);
	return 0;
}
#endif
	/*printf("%d\n",sizeof (char *));
	printf("%d\n",sizeof (short *));
	printf("%d\n",sizeof (int *));
	printf("%d\n",sizeof (double *));

	const double PI = 3.14;
		//PI = 3.1415；//const修饰的常量PI的值不可以修改
	double area;
	const double PI = 3.14; 
	double r = 5.4;//半径
	area = PI * r * r;
	printf("圆的面积：%lf\n",area);
    十进制    89
	二进制    01011001
	八进制    0131
	十六进制  0x59
*/
	//int num = 99;
	//&num;//取出num的地址
	//val = *ptr;//找出指向ptr的值
	////语句：ptr = &num;和val = *ptr;放在一起相当于下面的语句：
	//val = num;
	//val = 22;
	//ptr = &val;//ptr指向val的地址
	//num = *ptr;//把ptr指向的地址上的值赋给num
	////三条语句的结果是：把22赋给了num
	//int * p;
	//int num = 10;
	//int * pi = &num;//p为一个整型变量
	//char * pc;
	//float * pf;
	//*pi = 20;
	//printf("%p\n%p\n",&num,pi);

	//printf("%p\n",&num);//打印地址；%p为地址打印格式
