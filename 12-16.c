#include <stdio.h>
int main()
{
	struct student 
	{
		char name[20];
		int age;
		char number[30];
	};
	struct student stu1 = {"jack", 18, "12345"};//�����ṹ���Ա˳��Ҫд��
	struct student stu2 = {"rose", 18, "1234567"};
	struct student * pstu2 = &stu2;
	stu1.age = 22;//�ṹ��Ա����
	pstu2->age = 20;//�ṹ��Ա����
	//�����ṹ���Ա˳��Ҫд��
	printf("name = %s, age = %d, number = %s\n",stu1.name, stu1.age, stu1.number);//�ṹ��.��Ա����Ӧ��
	printf("name = %s, age = %d, number = %s\n",pstu2->name, pstu2->age, pstu2->number);//�ṹ��ָ��->��Ա����Ӧ��
	return 0;
}



//#include <stdio.h>
//int main()
//{
//	int a = 10, b = 20;
//	a = a > b ? 1 : -1;
//	printf("a = %d\n", a);
//	return 0;
//}

	//int a = 10, b = 20;
	//if (a > b)
	//	a = 1;
	//else
	//	a = -1;
	//printf("a = %d\n", a);
//int num = 10;
//int * p = NULL;
//printf("!2 = %d\n", !2);
//printf("!0 = %d\n", !0);
//num = -num;
//p = &num;
//printf("sizeof(int) = %d\n",sizeof(int));
//printf("sizeof(num) = %d\n",sizeof(num));
//printf("sizeof num = %d\n",sizeof num);//����д���ԣ������Ƽ�����û��Ǽ�������
////printf("%d\n",sizeof int);//����������д��error C2059: �﷨����:�����͡�

//int x = 10;
//int y = 20;
//int z = x = y = 50;
//printf("%d %d %d\n", x, y, z);
//int num1 = 10;
//int num2 = 20;
//printf("%d & %d = %d\n",num1, num2, num1 & num2);
//printf("%d | %d = %d\n",num1, num2, num1 | num2);
//printf("%d ^ %d = %d\n",num1, num2, num1 ^ num2);
//int num1 = -10;
//int num2 = 10;
//int num3 = num1 << 1;
//int num4 = num2 << 1;
//printf("%d << 1 = %d\n",num1, num3);
//printf("%d << 1 = %d\n",num2, num4);
//char num1 = -129;
//printf("%d\n",num1);
//int num1 = 10;
//int num2 = num1 << 1;
//printf("num1 = %d, num1 << 1 = %d\n",num1, num2);
//double num1 = 21.4;
//double num2 = -41.6;
//int num3 = 21;
//int num4 = -35;
//printf("����������������%lf / 2 = %lf\n",num1, num1 / 2);
//printf("����������������%lf / 2 = %lf\n",num2, num2 / 2);
//printf("��������������%d / 2 = %d\n",num3, num3 / 2);
//printf("��������������%d / 2 = %d\n",num4, num4 / 2);
//printf("������������������%d %% 2 = %d\n",num3, num3 % 2);
//printf("������������������%d %% 2 = %d\n",num4, num4 % 2);
//printf("������������ȡģ��%lf\n",num1 % 2);//error
//printf("������������ȡģ��%lf\n",num2 % 2);//error
//int i = 0, a = 0, b = 2, c = 3, d = 4;

//i =a++ && ++b && d++;

//printf("i = %d, a = %d, b = %d, c = %d, d = %d\n",i, a, b, c, d);
//a = 0, b = 2, c = 3, d = 4;

//i =a++ || ++b || d++;

//printf("i = %d, a = %d, b = %d, c = %d, d = %d\n",i, a, b, c, d);
//	int a = 10, b = 20;
//if (a > b)
//	a = 1;
//else
//	a = -1;
//printf("a = %d\n", a);
