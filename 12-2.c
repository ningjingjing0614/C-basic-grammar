#include <stdio.h>
#include <string.h>
int main()//Êı×éÄæÖÃ
{
	char arr[] = "hello world!";
	int len = strlen(arr);
	int left = 0;
	int right = len - 1; 
	printf("%s\n",arr);
		while (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left ++;
			right --;
		}
	printf("%s\n",arr);
	return 0;
}