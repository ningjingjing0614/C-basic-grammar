#include <stdio.h>
#if 0
#include <string.h>
//编写一个函数 reverse_string(char * string)（递归实现）
//
//实现：将参数字符串中的字符反向排列。
//
//要求：不能使用C函数库中的字符串操作函数。
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