#if 0
/*
思路：
遍历数组，对数组中相邻的两个元素进行比较，如果需要升序，前一个数据大于(小于)后一个数据时，
交换两个位置上的数据，直到所有的数据比较完，此时，最大的数据已经放在数组的末尾。
除最大数据已经排好序外，其余数据还是无需，对剩余数据采用与上述类似的方式进行处理即可
*/
 
 
void BubbleSort(int array[], int size)
{
    // 外层循环控制冒泡排序的趟数
    // size-1表示：最后一趟区间中只剩余1个元素，该趟冒泡可以省略
    for(int i = 0; i < size-1; ++i)
    {
        // 具体冒泡的方式：用相邻的两个元素进行比较，前一个大于后一个元素时，交换着两个数据，依次直到数组的末尾
        for(int j = 1; j < size-i; ++j)
        {
            if(array[j-1] > array[j])
            {
                int temp = array[j-1];
                array[j-1] = array[j];
                array[j] = temp;
            }
        }
    }
}
 
 
 
 
/*
优化：如果某次冒泡结束后，序列已经有序了，后面剩余元素的冒泡可以省略
*/
 
 
void BubbleSort(int array[], int size)
{
    // 外层循环控制冒泡排序的趟数
    // size-1表示：最后一趟区间中只剩余1个元素，该趟冒泡可以省略
    for(int i = 0; i < size-1; ++i)
    {
        int isChange = 0; 
        // 具体冒泡的方式：用相邻的两个元素进行比较，前一个大于后一个元素时，交换着两个数据，依次直到数组的末尾
        for(int j = 1; j < size-i; ++j)
        {
            if(array[j-1] > array[j])
            {
                int temp = array[j-1];
                array[j-1] = array[j];
                array[j] = temp;
                
                isChange = 1;   // 优化过程，如果本次冒泡进行数据交换了，说明本次还是无序的，就将isChange设置为1
            }
        }
        
        // 如果本次冒泡中，元素没有交换，则本次开始冒泡时，数据已经有序了，后面的冒泡可以不用进行了
        if(!isChange)
            return;
    }
}
#endif