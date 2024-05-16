// Arrange the array lements in descending order using Bubble Sort
// Find min, max of the array
#include<stdio.h>


int main()
{
    int arr_size, temp; 

    printf("Enter the number of array: ");
    scanf("%d", &arr_size);

    int arr[arr_size];
    // Loop throuh arr and assign a value to each element
    for (int i = 0; i < arr_size; i++)
    {
        printf("Enter value of element #%d ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Loop through arr and sort
    for (int i=0; i < arr_size; i++)
    {
        for (int j=0; j < arr_size - i - 1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Print array using bubble sort
    printf("Arry sorted using Bubble Sort Algorithm");
    for (int i = 0; i < arr_size; i++)
    {
        printf("Array element #%d: %d\n", i + 1, arr[i]);
    }

    int min, max;
    min = arr[arr_size -1];
    max = arr[0];
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
}
