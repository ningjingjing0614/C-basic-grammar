#include <stdio.h>
#if 0
//���ֲ���
int binary(int arr[], int num)
{
	int left = 0;
	int right = sizeof(arr)/sizeof(int);//����ҿ�
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
		printf("û�ҵ�%d\n",num);
	}
	else
	{
		printf("�ҵ���%d���±��ǣ�%d\n",num, ret);
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
	int right = sizeof(arr)/sizeof(int);//����ҿ�
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
			printf("�ҵ���%d���±��ǣ�%d\n",num, mid);
			break;
		}
	}
	if (left >= right)
	{
		printf("û�ҵ�%d\n",num);
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
	int right = sizeof(arr) / sizeof(int) - 1;//����ұ�
	while(left <= right)// = ����Ϊrightλ��ȡ���п�����Ҫ��ֵ
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
			printf("�ҵ����±�Ϊ%d\n",mid);
			break;
		}
		if (left > right)
		{
			printf("û�ҵ�");
		}
	}
	return 0;
}
#endif