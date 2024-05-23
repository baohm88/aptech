#include <stdio.h>

int main()
{
    int num1, num2, i, UCLN, BCNN;

    // Ask user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

// Find greatest common divisor
for (i = 1; i <= num1 && i <= num2; i++)
{
    if (num1 % i == 0 && num2 % i == 0)
    {
        UCLN = i;
    }
}

// Find least common multiple
BCNN = (num1 * num2) / UCLN;

// Print the greatest common divisor and least common multiple
printf("Greatest common divisor: %d\n", UCLN);
printf("Least common multiple: %d\n", BCNN);

return 0;
}