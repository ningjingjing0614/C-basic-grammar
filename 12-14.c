
#if 0
#include <stdio.h>
int main()//bubble sortCSDN
{//from smallest to largest
	int arr[] = {23,94,61,35,49,10,55,87,73};
	int size = sizeof(arr) / sizeof(int);
	int i, j;
	int a = size;
	while (a > 1)//�жϣ��������Ԫ��ֻ��һ������û�������Ҫ
	{
		// ���ѭ������ð�����������
		// size-1��ʾ�����һ��������ֻʣ��1��Ԫ�أ�����ð�ݿ���ʡ��
		for (i = 0; i < size; i ++)
		{
			int count = 0;
			// ����ð�ݵķ�ʽ�������ڵ�����Ԫ�ؽ��бȽϣ�
			//ǰһ�����ں�һ��Ԫ��ʱ���������������ݣ�����ֱ�������ĩβ
			for (j = 1; j < size - i; j ++)
			{
				if (arr[j - 1] > arr[j])//�����Ҫ�Ӵ�С������ı�������ж�����
				{
					int tmp = arr[j - 1];
					arr[j - 1] = arr[j];
					arr[j] = tmp;
					count = 1;// �������ð�ݽ������ݽ����ˣ�˵�����λ�������ģ��ͽ�count����Ϊ1
				}
			}
			//����forѭ�����������forѭ��������
			/*for (j = 0; j < size -1 - i; j ++)
			{
			if (arr[j] > arr[j + 1])
			{
			int tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
			count = 1;
			}
			}*/
			if (count == 0)
			{//�������ð���У�Ԫ��û�н������򱾴ο�ʼð��ʱ�������Ѿ������ˣ������ð�ݿ��Բ��ý�����
				break;
			}
		}
		a --;
	}
	for (i = 0; i < size; i ++)//�����ӡ�ź������������
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
#endif