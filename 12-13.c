// ����һ������[left, right] ����
#include <stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int key = 7;
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1; // rightλ�õ����ݿ���ȡ��

	while(left<=right) // rightλ�������ݣ�����Ҫ���=��
	{
		int mid = left+(right-left)/2;
		if(arr[mid]>key) // keyС���м�λ�����ݣ�˵��key���������࣬��Ҫ�ı��ұ߽�
		{
			right = mid-1; // rightλ�õ����ݿ���ȡ�������right=mid-1
		}
		else if(arr[mid]<key)// key�����м�λ�����ݣ�˵��key�������Ұ�࣬��Ҫ�ı���߽�
		{
			left = mid+1; // leftλ�õ����ݿ���ȡ�������left=mid+1
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}

	if(left>right)
		printf("�Ҳ���\n");
	return 0;
}

// 
// ������������[left, right) ����
#include <stdio.h>
 
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int key = 7;
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0]); // rightλ�õ�����ȡ����
 
	while(left<right) // rightλ��û�����ݣ��˴�����Ҫ���=
	{
		int mid = left+(right-left)/2;
		if(arr[mid]>key) // keyС���м�λ�����ݣ�˵��key���������࣬��Ҫ�ı��ұ߽�
		{
			right = mid; // rightλ�õ�����ȡ���������right=mid������Ҫ��1
		}
		else if(arr[mid]<key)// key�����м�λ�����ݣ�˵��key�������Ұ�࣬��Ҫ�ı���߽�
		{
			left = mid+1; // leftλ�õ����ݿ���ȡ�������left=mid+1
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
      break;
		}
	}
   
	if(left>=right)
		printf("�Ҳ���\n");
	return 0;
}








#if 0
#include <stdio.h>//���ֲ���CSDN
int main()
{
	int arr2[9] = {1,2,3,4,5,6,7,8,9};
	int key = 7;
	int left = 0;
	int right = sizeof(arr2) / sizeof(arr2[0]);//ȡ����right��ֵ
	int mid = 0;
	//ǰ�պ�����
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
			printf("�ҵ���keyֵ�������±�Ϊ%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ�����������û���ҵ��ؼ�ֵ\n");
	return 0;
}


int main()
{
	int arr2[9] = {1,2,3,4,5,6,7,8,9};
	int key = 7;
	int left = 0;
	int right = sizeof(arr2) / sizeof(arr2[0]) -1;//ȡ��right��ǰ�պ��
	int mid = 0;
	while (left < right)//ǰ�պ󿪣�midʵ������mid-1
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
			printf("�ҵ���keyֵ�������±�Ϊ%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ�����������û���ҵ��ؼ�ֵ\n");
	return 0;
}
#endif