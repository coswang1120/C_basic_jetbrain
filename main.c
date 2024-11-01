#include <stdio.h>

/**
 * 使用泡泡排序算法對數組進行排序
 *
 * @param arr 待排序數組
 * @param n 數組的長度
 */
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)  // 外層迴圈：控制遍歷次數
    {
        for (j = 0; j < n-i-1; j++)  // 內層迴圈：比較相鄰元素並交換
        {
            if (arr[j] > arr[j+1])  // 如果前一個元素大於後一個元素，則交換
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

/**
 * 打印數組
 *
 * @param arr 數組
 * @param size 數組的長度
 */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("排序前的數組: \n");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("排序後的數組: \n");
    printArray(arr, n);
    return 0;
}