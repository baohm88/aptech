#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of array elements: ");
    scanf("%d", &n);
    int arr1[n], arr2[n], j = 0;
    
    // Inputs
    for (int i = 0; i < n; i++)
    {
        printf("Enter element #%d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (int i = n -1; i >= 0 ; i--)
    {
        arr2[j] = arr1[i];
        j++;
    }
    
    // Output
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element #%d: %d\n", i + 1, arr2[i]);
    }
    
    return 0;
}
