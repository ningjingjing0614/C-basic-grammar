#include <stdio.h>
#if 0
//二分查找
int binary(int arr[], int num)
{
	int left = 0;
	int right = sizeof(arr)/sizeof(int);//左闭右开
	while (left < right)
	{
		int mid = (left + right)/2;
		if (num < arr[mid])
		{
			right = mid;
		}
		else if (num > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
			break;
		}
	}
	if (left >= right)
	{
		return -1;
	}
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int num = 9;
	int ret = binary (arr, num);
	if (ret == -1)
	{
		printf("没找到%d\n",num);
	}
	else
	{
		printf("找到了%d，下标是：%d\n",num, ret);
	}

	return 0;
}
#endif
#if 0
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int num = 9;
	int left = 0;
	int right = sizeof(arr)/sizeof(int);//左闭右开
	while (left < right)
	{
		int mid = (left + right)/2;
		if (num < arr[mid])
		{
			right = mid;
		}
		else if (num > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了%d，下标是：%d\n",num, mid);
			break;
		}
	}
	if (left >= right)
	{
		printf("没找到%d\n",num);
	}
	return 0;
}
#endif
#if 0
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int num = 9;
	int left = 0;
	int right = sizeof(arr) / sizeof(int) - 1;//左闭右闭
	while(left <= right)// = 是因为right位置取上有可能是要找值
	{
		int mid = (left + right)/2;
		if(num < arr[mid])
		{
			right = mid - 1;
		}
		else if(num > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了下标为%d\n",mid);
			break;
		}
		if (left > right)
		{
			printf("没找到");
		}
	}
	return 0;
}
#endif