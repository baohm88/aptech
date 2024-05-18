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
        for (int j = 0; j < cols; j++)
        {
            printf("Enter value of row #%d, column #%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }    
    }

    
    // Assign value to each element of arr2
    int arr_size2 = rows * cols;
    int arr2[arr_size2], k = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr2[k] = arr[i][j];
            k++;
        }   
    }
    
    // Loop through arr and sort
    for (int i=0; i < arr_size2; i++)
    {
        for (int j=0; j < arr_size2 - i - 1; j++)
        {
            if (arr2[j] > arr2[j+1])
            {
                int temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }


    int min, max;
    min = arr2[0];
    max = arr2[arr_size2 -1];
    
    // Loop through arr and re-assign value
    int arr3[rows][cols];
    k = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr3[i][j] = arr2[k];
            k++;
        }
    }
    
    printf("\nNew array in descending order: \n");
    for (int i = 0; i < rows; i++)
    {
        printf("Elements of row #%d: ", i + 1);
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    return 0;
}
