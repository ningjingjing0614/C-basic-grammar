#if 0
#include <stdio.h>
#define DEBUG
int main()
{
#ifdef DEBUG  //#define������DEBUG��ִ������һ�д���
	printf("OK!������#define DEBUG\n");
#endif  //����#ifdef DEBUG//����û�У�û�лᱨ���е� error C1070: **�ļ��е�#if/#endif �Բ�ƥ��
#ifndef DEBUG  //#defineû�ж���DEBUG��ִ������һ�д���
	printf("NO!û�ж���#define DEBUG\n");
#endif  //����#ifndef DEBUG//����û�У�û�лᱨ��error C1004: ����������ļ�β
	return 0;
		int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i == 5)
			printf("%d\n",i);
	}


}
#endif
#include <stdio.h>
int main()
{
	int i = 10;
	if (i)
	{
		printf("%d\n",i);
	}
	printf("eeeeeeeeee%d\n",i);
	/*int i = 8;
	switch(i)
	{
	case 1:
		printf("%d\n",i);
		case 2:
		printf("%d\n",i);
		default:
			printf("eeeeeee");
		case 6:
		printf("%d\n",i);
		case 9:
		printf("%d\n",i);*/
		/*default:
			printf("eeeeeee");
	}*/
	return 0;
}