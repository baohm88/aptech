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

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element of row#%d, column#%d ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }


    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j)
            {
                sum += arr[i][j];
            }   
        }
    }

    printf("Sum of main diagonal elements = %d\n", sum);
    return 0;
}