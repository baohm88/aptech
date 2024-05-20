// Fn to get an array
#include<stdio.h>

void get_array(int *arr, int size);


int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    // Initialize array
    int arr[size];

    // Declare pointer a pointing to the address of arr
    int *a = arr;
    get_array(a, size);

    printf("Array: [");
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            printf("%d", arr[i]);    
        }
        else
        {
            printf("%d, ", arr[i]);
        }
    }
    printf("]\n");
    
        
    return 0;
}

void get_array(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of element #%d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
}




