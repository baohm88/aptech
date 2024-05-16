// Arrange the 2-dimentional array lements by rows in descending order
// Find min, max of the array rows
#include<stdio.h>


int main()
{
    int rows, cols, temp; 

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of colums: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    // Loop throuh arr and assign a value to each element
    // Loop through rows
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; i < cols; j++)
        {
            printf("Enter value of row #%d, column #%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }    
    }

    // Loop and print each element by rows
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; i < cols; j++)
        {
            printf("Enter value of row #%d, column #%d: %d\n", i + 1, j + 1, arr[i][j]);
        }    
    }

    // Loop through arr and sort
    // for (int i=0; i < arr_size; i++)
    // {
    //     for (int j=0; j < arr_size - i - 1; j++)
    //     {
    //         if (arr[j] < arr[j+1])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }

    // // Print array
    // for (int i = 0; i < arr_size; i++)
    // {
    //     printf("Array element #%d: %d\n", i + 1, arr[i]);
    // }

    // int min, max;
    // min = arr[arr_size -1];
    // max = arr[0];
    // printf("Min: %d\n", min);
    // printf("Max: %d\n", max);
    return 0;
}
