// Arrange the array lements in descending order using Insertion Sort
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

    
    int tmp,i,j;
    // Loop through arr and form insertion sorting
    for (j = 1; j < arr_size; j++)
    {
        i = j - 1;
        tmp = arr[j];
        while ( (i >= 0) && (tmp > arr[i]) )
        {
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = tmp;
    }


    // Print array using bubble sort
    printf("Arry sorted using Insertion Sort Algorithm\n");
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
