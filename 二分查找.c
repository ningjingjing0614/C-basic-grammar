///*
//���ֲ��ң�
// ��һ������������У���ĳ�������Ƿ��ڸü����У�����ڴ�ӡ�������ڼ����е��±꣬�����ӡ�Ҳ���
//  
// �����ҵķ�ʽ��
//  1. �ҵ�������м�λ��
//  2. ����м�λ�õ������Ƿ���Ҫ���ҵ�����key���
//    a: ��ȣ��ҵ�����ӡ�±꣬����ѭ��
//    b: key < arr[mid], ��key������arr[mid]�����࣬������������ж��ֲ���
//    c: key > arr[mid], ��key������arr[mid]���Ұ�࣬�������Ұ����ж��ֲ���
//     
//    ����ҵ������±꣬���������ֱ��������û��Ԫ��ʱ��˵��key���ڼ����У���ӡ�Ҳ���
//     
// �״�㣺
// 1. right���Ұ������ȡֵ����ֵ�����˺����д��
// 2. whileѭ���������Ƿ��еȺ�
// 3. ���м�λ�õķ�����ֱ����ӳ�2����������
// 4. ����left��right�ı߽�ʱ����ȷ���Ƿ�Ҫ+1��-1
//*/
// 
//// ����һ������[left, right] ����
//#include <stdio.h>
// 
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int key = 3;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1; // rightλ�õ����ݿ���ȡ��
// 
//	while(left<=right) // rightλ�������ݣ�����Ҫ���=��
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid]>key) // keyС���м�λ�����ݣ�˵��key���������࣬��Ҫ�ı��ұ߽�
//		{
//			right = mid-1; // rightλ�õ����ݿ���ȡ�������right=mid-1
//		}
//		else if(arr[mid]<key)// key�����м�λ�����ݣ�˵��key�������Ұ�࣬��Ҫ�ı���߽�
//		{
//			left = mid+1; // leftλ�õ����ݿ���ȡ�������left=mid+1
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//      break;
//		}
//	}
//   
//	if(left>right)
//		printf("�Ҳ���\n");
//	return 0;
//}
// 
// 
//// ������������[left, right) ����
//#include <stdio.h>
// 
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int key = 3;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0]); // rightλ�õ�����ȡ����
// 
//	while(left<right) // rightλ��û�����ݣ��˴�����Ҫ���=
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid]>key) // keyС���м�λ�����ݣ�˵��key���������࣬��Ҫ�ı��ұ߽�
//		{
//			right = mid; // rightλ�õ�����ȡ���������right=mid������Ҫ��1
//		}
//		else if(arr[mid]<key)// key�����м�λ�����ݣ�˵��key�������Ұ�࣬��Ҫ�ı���߽�
//		{
//			left = mid+1; // leftλ�õ����ݿ���ȡ�������left=mid+1
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//      break;
//		}
//	}
//   
//	if(left>=right)
//		printf("�Ҳ���\n");
//	return 0;
//}