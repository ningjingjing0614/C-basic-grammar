#include <stdio.h>
#if 0
#include <string.h>
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������С�
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr+len-1);
	*(arr+len-1) = '\0';
	if(strlen(arr+1)>=2)
		reverse_string(arr+1);
	*(arr+len-1) = tmp;
}
int main()
{
	char arr[] = "hello   ";
	reverse_string(arr);
	printf("%s\n",arr);
	return 0;
}
#endif