#include <stdio.h>
void bubble (int * arr, int size)//ц╟ещеепР
{
	int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i; j ++)
			{
				if (arr[j] > arr[j + 1])
				{
					int tmp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = tmp;
				}
			}
		}
}
int main ()
{
	int arr[] = {1,4,2,1,5,9,6,5};
	int i;
	int size = sizeof(arr)/sizeof(arr[0]) - 1;
	for (i = 0; i < 8; i++)
	{
		printf("%d  ",arr[i]);
	}
	bubble(arr, size);
	printf("\n");
	for (i = 0; i < 8; i++)
	{
		printf("%d   ",arr[i]);
	}
	return 0;
}

		//for (i = 0; i < size; i ++)
		//{
		//	if (arr[i] > arr[i + 1])
		//	{
		//		int tmp = arr[i];
		//		arr[i] = arr[i+1];
		//		arr[i+1] = tmp;
		//	}