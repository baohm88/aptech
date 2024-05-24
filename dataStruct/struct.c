#include <stdio.h>

struct student
{
    char name[50];
    int age;
    char address[50];
};


void printStd(struct student std);


int main()
{
    struct student std1;
    
    printf("Name: ");
    scanf("%s", std1.name);

    printf("Age: ");
    scanf("%d", &std1.age);
    
    printf("Address: ");
    scanf("%s", std1.address);
    
    printStd(std1);
    
    return 0;
}


void printStd(struct student std)
{
    printf("Name: %s\n", std.name);
    printf("Age : %d\n", std.age);
    printf("Add : %s\n", std.address);
}