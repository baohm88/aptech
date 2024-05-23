#include<stdio.h>

int main()
{
    // Get num of arr elements from user
    int arr_size, min, max;
    printf("Enter the number of array elements: ");
    scanf("%d", &arr_size);

    // Loop through array and assign a value to each array element
    int arr[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        printf("Enter the value of element #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Loop through arr, compare and re-assign min/max value
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < arr_size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
        if (arr[i] > max )
        {
            max = arr[i];
        }
    }
    printf("Min of the array: %d\nMax of the array: %d\n", min, max);

    return 0;
}
