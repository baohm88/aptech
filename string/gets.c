#include<stdio.h>

int main()
{
    char s1[20];
    char s2[] = "Hello, world!";

    printf("Enter a string: ");
    gets(s1);

    printf("\nString 1: %s\nString 2: %s\n", s1, s2);

    for (size_t i = 0; i < 20 && s1[i] != '\0'; i++)
    {
        printf("%c ", s1[i]);
    }
    
    return 0;
}
