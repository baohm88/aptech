#include<stdio.h>

int main()
{
    int n, num, min, max;

    // Ask user to enter the number of inputs
    printf("Enter the number of inputs: ");
    scanf("%d", &n);

    // Ask user to enter the inputs
    printf("Enter %d numbers:\n", n);
    scanf("%d", &num);

    // Initialize min and max with the first input
    min = num;
    max = num;

    // Find min and max values
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &num);
        if (num < min)
        {
            min = num;
        }
        if (num > max)
        {
            max = num;
        }
    }

    // Print min and max values
    printf("Min value: %d\n", min);
    printf("Max value: %d\n", max);

    return 0;
}