#include <stdio.h>
#define A 1
#define B (A + 3)
#define C A/B * 3//��ʱC��ʾ1/(1+3)*3
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
		//PI = 3.1415��//const���εĳ���PI��ֵ�������޸�
	double area;
	const double PI = 3.14; 
	double r = 5.4;//�뾶
	area = PI * r * r;
	printf("Բ�������%lf\n",area);
    ʮ����    89
	������    01011001
	�˽���    0131
	ʮ������  0x59
*/
	//int num = 99;
	//&num;//ȡ��num�ĵ�ַ
	//val = *ptr;//�ҳ�ָ��ptr��ֵ
	////��䣺ptr = &num;��val = *ptr;����һ���൱���������䣺
	//val = num;
	//val = 22;
	//ptr = &val;//ptrָ��val�ĵ�ַ
	//num = *ptr;//��ptrָ��ĵ�ַ�ϵ�ֵ����num
	////�������Ľ���ǣ���22������num
	//int * p;
	//int num = 10;
	//int * pi = &num;//pΪһ�����ͱ���
	//char * pc;
	//float * pf;
	//*pi = 20;
	//printf("%p\n%p\n",&num,pi);

	//printf("%p\n",&num);//��ӡ��ַ��%pΪ��ַ��ӡ��ʽ
