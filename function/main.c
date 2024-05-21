// Fn to get an array
#include<stdio.h>

void get_array(int *arr, int size);
void print_array(int *a, int size);
void sort_array_desc(int *arr, int size);
void sort_array_asc(int *arr, int size);
int check_num(int *arr, int size, int num);
void compute_sum(int *arr, int size);

int main()
{
    int size, user_choice, num;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    // Initialize array
    int arr[size];

    // Declare pointer a pointing to the address of arr
    int *a = arr;
    get_array(a, size);

    printf("\nYour array: ");
    print_array(a, size);
    
    // Get user's choice (1 or 2)
    printf("\nChoose sorting method (0: ASC, 1: DESC): ");
    scanf("%d", &user_choice);

    // Print array as per the user's choice
    switch (user_choice)
    {
    case 0:
        sort_array_asc(a, size);
        printf("\nAscended array: ");
        print_array(a, size);
        break;
    
    case 1:
        sort_array_desc(a, size);
        printf("\nDescended array: ");
        print_array(a, size);
        break;
    
    default:
        printf("Your's input is invalid");
        break;
    }

    // Check if a number is in an array
    printf("\nEnter a number to check: ");
    scanf("%d", &num);
    check_num(a, size, num);


    // Sum of array elements
    printf("\nSum of array elements = ");
    compute_sum(a, size);
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

void print_array(int *arr, int size)
{
    printf("[");
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
    
}

void sort_array_desc(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sort_array_asc(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int check_num(int *arr, int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            printf("Found %d in the array\n", num);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}


void compute_sum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    printf("%d\n", sum);
    
}