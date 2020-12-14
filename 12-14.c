
#if 0
#include <stdio.h>
int main()//bubble sortCSDN
{//from smallest to largest
	int arr[] = {23,94,61,35,49,10,55,87,73};
	int size = sizeof(arr) / sizeof(int);
	int i, j;
	int a = size;
	while (a > 1)//判断，如果数组元素只有一个，则没有排序必要
	{
		// 外层循环控制冒泡排序的趟数
		// size-1表示：最后一趟区间中只剩余1个元素，该趟冒泡可以省略
		for (i = 0; i < size; i ++)
		{
			int count = 0;
			// 具体冒泡的方式：用相邻的两个元素进行比较，
			//前一个大于后一个元素时，交换着两个数据，依次直到数组的末尾
			for (j = 1; j < size - i; j ++)
			{
				if (arr[j - 1] > arr[j])//如果想要从大到小排序则改变这里的判断条件
				{
					int tmp = arr[j - 1];
					arr[j - 1] = arr[j];
					arr[j] = tmp;
					count = 1;// 如果本次冒泡进行数据交换了，说明本次还是无序的，就将count设置为1
				}
			}
			//这种for循环或者上面的for循环都可以
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
			{//如果本次冒泡中，元素没有交换，则本次开始冒泡时，数据已经有序了，后面的冒泡可以不用进行了
				break;
			}
		}
		a --;
	}
	for (i = 0; i < size; i ++)//输出打印排好序的数组内容
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
#endif