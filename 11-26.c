//#include <stdio.h>
//struct student{
//	char name[50];
//	char sex[8];
//	int age;
//};
//int main ()
//{
//	struct student ning = {"宁静静", "女",18};
//	//printf("%s,%s,%d\n",ning.name, ning.sex, ning.age);
//	struct student* pning = &ning;
//	printf("%s,%s,%d\n",pning->name, pning->sex, pning->age);
//	return 0;
//}







//#include <stdio.h>
//extern int Add (int a, int b);
//int main ()
//{
//	printf("%d\n",Add(2, 3));
//	return 0;
//}

//#include <stdio.h>
//extern int val;
//int main()
//{
//	printf("%d\n",val);
//	return 0;
//}
	/*char a = 9;
	int b = 12;
	char c = 7;
	double d = 67.7;
	static int e = 999;
	printf("%u\n",&a);
	printf("%u\n",&b);
	printf("%u\n",&c);
	printf("%u\n",&d);
	printf("%u\n",&e);
	printf("\n\n\n%p\n",&a);
	printf("%p\n",&b);
	printf("%p\n",&c);
	printf("%p\n",&d);
	printf("%p\n",&e);*/
	//char* pa = &a;
	//int* pb = &b;
	//printf("%d\n",sizeof (pa));
	//printf("%d\n",sizeof (pb));

//#include <stdio.h>
//void add()
//{
//static int num = 0;//局部变量定义时前面加上static关键字
//	int num = 0;
//	num ++;
//	printf("%d\n",num);
//}
//int main()
//{
//	int i;
//	for(i = 0; i < 5; i ++)
//	{
//	    add();
//	}
//	return 0;
//}

/*#include <stdio.h>
//extern int i;
////static int i = 9;
//extern void as();
//int main()
//{
//	 as();
//	printf("%d\n",i);
//	return 0;
//}
//
////#include <stdio.h>
////
////void add()
////{
////static int i = 0;
////i ++;
////printf("%d\n",i);
////}
////int main()
////{ 
////	add();
////	add();
////	add();
////   return 0;
////}
//
//
//
////static int add(int i)
////{
////	i++;
////	return i;
////}
////int main()
////{
////	int add(int i);
////	int a = 1;
////	int j = add(a);
////	printf("%d\n",j);
////	return 0;
////}
//
//
////int add(int i)
////{
////	int i = 0;
////	i ++;
////	return i;
////}
////int main()
////{
////	int i ;
////	//add(i);
////    int a = add (i);
////    printf("%d\n",a);
////    return 0;
////}
*/
