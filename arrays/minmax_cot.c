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

    // Loop through cols
    for (int i = 0; i < cols; i++)
    {
        int min = arr[0][i];
        int max = arr[0][i];
        // Loop throug rows
        for (int j = 1; j < rows; j++)
        {
            if (arr[j][i] < min)
            {
                min = arr[j][i];
            }
            if (arr[j][i] > max)
            {
                max = arr[j][i];
            }
        }

        printf("Column %d - Min: %d, Max: %d\n", i+1, min, max);
    }

    return 0;
}