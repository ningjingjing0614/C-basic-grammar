
#include <stdio.h>
#if 0
#include <string.h>
int main()
{
	int arr[5] = {1,2,3,4,5};
	char arr1[] = "124";
	int a = sizeof(arr)/sizeof(arr[0]);
	int b = strlen(arr1);
	int c = sizeof(arr1);
	printf("%d\n",a);
	
	printf("%d\n",b);
	printf("%d\n",c);
	return 0;
}
#endif
