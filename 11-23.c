#include <stdio.h>
int main()
{
	int num = (int)(3.5 * 10 + 5 * 2.5);//将3.5 * 10 + 5 * 2.5整个式子运算完成再进行强转
	printf("%d\n",num);
	return 0;
}
	//int num1 = 45;
	//float num2 = 60.722088;
	//printf("大的类型float %f\n",num1 + num2);
	//printf("小的类型int %\d\n",num1 + num2);
	//int num1 = 56;
	//unsigned int num2 = -99;
	//printf("转换为有符号型：%d\n",num1 + num2);
	/*char ch = 'a';
	int num = 15;
	double fl = num;
	printf("%f\n",fl);
		float fl1 = 15.7f;
	double fl2 = 15.66666666;warning C4244: “初始化”: 从“double”转换到“int”，可能丢失数据
	fl1 = fl2;
	printf("fl1 float类型输出：%.8lf\n",fl1);
	printf("fl2 double类型输出：%.8lf\n",fl2);
		double fl = 23.99999;
	printf("%d\n",fl);
		double fl = 56.9999999;
	int num = (int)fl;//这里不是四舍五入，而是直接将小数点后的数据截断
	printf("%d\n",num);
	int num = (int)3.5 * 10 + 5 * 2.4;//只对离它最近的3.5强转为3 num = 3*10+5*2.4
	printf("%d\n",num);


	*/