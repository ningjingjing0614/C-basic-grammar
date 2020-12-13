// 方法一，采用[left, right] 区间
#include <stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int key = 7;
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1; // right位置的数据可以取到

	while(left<=right) // right位置有数据，必须要添加=号
	{
		int mid = left+(right-left)/2;
		if(arr[mid]>key) // key小于中间位置数据，说明key可能在左半侧，需要改变右边界
		{
			right = mid-1; // right位置的数据可以取到，因此right=mid-1
		}
		else if(arr[mid]<key)// key大于中间位置数据，说明key可能在右半侧，需要改变左边界
		{
			left = mid+1; // left位置的数据可以取到，因此left=mid+1
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}

	if(left>right)
		printf("找不到\n");
	return 0;
}

// 
// 方法二，采用[left, right) 区间
#include <stdio.h>
 
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int key = 7;
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0]); // right位置的数据取不到
 
	while(left<right) // right位置没有数据，此处不需要添加=
	{
		int mid = left+(right-left)/2;
		if(arr[mid]>key) // key小于中间位置数据，说明key可能在左半侧，需要改变右边界
		{
			right = mid; // right位置的数据取不到，因此right=mid，不需要减1
		}
		else if(arr[mid]<key)// key大于中间位置数据，说明key可能在右半侧，需要改变左边界
		{
			left = mid+1; // left位置的数据可以取到，因此left=mid+1
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
      break;
		}
	}
   
	if(left>=right)
		printf("找不到\n");
	return 0;
}








#if 0
#include <stdio.h>//二分查找CSDN
int main()
{
	int arr2[9] = {1,2,3,4,5,6,7,8,9};
	int key = 7;
	int left = 0;
	int right = sizeof(arr2) / sizeof(arr2[0]);//取不到right的值
	int mid = 0;
	//前闭后开区间
	while (left < right)//
	{
		mid = (left + right) / 2;
		if (arr2[mid] > key)
		{
			right = mid;
		}
		else if (arr2[mid] < key)
		{
			left = mid + 1;
		}
		else 
		{
			printf("找到了key值，数组下标为%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到，数组中没有找到关键值\n");
	return 0;
}


int main()
{
	int arr2[9] = {1,2,3,4,5,6,7,8,9};
	int key = 7;
	int left = 0;
	int right = sizeof(arr2) / sizeof(arr2[0]) -1;//取到right，前闭后闭
	int mid = 0;
	while (left < right)//前闭后开，mid实际上是mid-1
	{
		mid = (left + right) / 2;
		if (arr2[mid] > key)
		{
			right = mid -1;
		}
		else if (arr2[mid] < key)
		{
			left = mid + 1;
		}
		else 
		{
			printf("找到了key值，数组下标为%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到，数组中没有找到关键值\n");
	return 0;
}
#endif