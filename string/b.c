#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getStrings(char *arr[], int n, int size) {
    for (int i = 0; i < n; i++) {
        arr[i] = (char *)malloc(size * sizeof(char));  // Allocate memory for each string
        printf("Enter string %d: ", i + 1);
        scanf("%s", arr[i]);
    }
}

void printStrings(char *arr[], int n) {
    printf("\nThe entered strings are:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

void sortStringsByLength(char *arr[], int n) {
    char *temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(arr[j]) > strlen(arr[j + 1])) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, size;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    
    printf("Enter the size of string: ");
    scanf("%d", &size);

    char *strings[n];

    // Getting strings from the user
    getStrings(strings, n, size);

    // Printing the entered strings
    printStrings(strings, n);

    // Sort strings by length
    sortStringsByLength(strings, n);

    // Displaying sorted strings
    printf("\nStrings sorted by length in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    // Free allocated memory for each string
    for (int i = 0; i < n; i++) {
        free(strings[i]);
    }

    return 0;
}