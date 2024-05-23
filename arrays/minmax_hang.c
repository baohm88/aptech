#include <stdio.h>

int main()
{ 
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter the elements of the array:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element of row#%d, column#%d ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        int min = arr[i][0];
        int max = arr[i][0];

        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }

        printf("Row %d: Min = %d, Max = %d\n", i+1, min, max);
    }

    return 0;
}