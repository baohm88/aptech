#include<stdio.h>
#include<string.h>


int main()
{
    char s1[20], s2[20];

    printf("Nhap vao s1: ");
    // scanf("%s", s1);
    gets(s1);
    // Copy s1 into s2
    printf("Gia tri s1: %s\n", s1);
    strcpy(s2, s1);
    printf("Gia tri s2: %s\n", s2);

    // Concatenate s2 vao s1
    strcat(s1, s2);
    printf("Gia tri s1: %s\n", s1);

    int compare = strcmp(s1, s2);
    printf("Gia tri compare: %d\n", compare);

    char *position;

    // Find the location of 'a' in str
    position = strchr(s1, 'a');
    printf("Address of a: %p\n", position);
    printf("Position of a: %ld\n", position - s1);


    // Length of str
    printf("Do dai chuoi: %lu\n", strlen(s1));
    return 0;
}
