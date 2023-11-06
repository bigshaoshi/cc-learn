#include <stdio.h>
#include <limits.h>

void chosenSort(int arr[], int n)
{
    int key, i, j, temp, index;
    for (i = 0; i < n; i++)
    {
        temp = INT_MAX;
        for (j = i + 1; j < n; j++)
        {
            if (temp > arr[j])
            {
                temp = arr[j];
                index = j;
            }
        }
        
        if (arr[i] > arr[index])
        {
            temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
    
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    chosenSort(arr, n);
    printArray(arr, n);
    return 0;
}
