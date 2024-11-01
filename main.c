#include <stdio.h>

/**
 * �ϥΪw�w�ƧǺ�k��Ʋնi��Ƨ�
 *
 * @param arr �ݱƧǼƲ�
 * @param n �Ʋժ�����
 */
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)  // �~�h�j��G����M������
    {
        for (j = 0; j < n-i-1; j++)  // ���h�j��G����۾F�����å洫
        {
            if (arr[j] > arr[j+1])  // �p�G�e�@�Ӥ����j���@�Ӥ����A�h�洫
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

/**
 * ���L�Ʋ�
 *
 * @param arr �Ʋ�
 * @param size �Ʋժ�����
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
    printf("�Ƨǫe���Ʋ�: \n");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("�Ƨǫ᪺�Ʋ�: \n");
    printArray(arr, n);
    return 0;
}