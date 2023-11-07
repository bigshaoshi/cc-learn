#include <stdio.h>

void insertionSort(int arr[],int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        key = arr[i];

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        arr[j + 1] = key; 
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[] = {99, 98, 97, 96, 95, 94, 93, 92, 91, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}