#include <stdio.h>
#include<string.h>


struct Student {
    char name[50];
    int age;
    char address[50];
};

typedef struct Student STD;


void getStudentInfo(struct Student students[], int numOfStudents);
void printStudentInfo(struct Student students[], int numOfStudents);
int findStudentName(struct Student students[], int numOfStudents, char studentName[]);
void printUpdatedStudentInfo(struct Student students[], int index);

int main() {
    int numOfStudents, index, userChoice, newAge;
    char studentName[50], newName[50], newAddress[50];

    printf("Number of students: ");
    scanf("%d", &numOfStudents);


    STD students[numOfStudents];

    getStudentInfo(students, numOfStudents);
    printStudentInfo(students, numOfStudents);

    // Get student name to search for
    printf("Enter name to search for: ");
    scanf("%s", studentName);

    index = findStudentName(students, numOfStudents, studentName);

    if (index != numOfStudents)
    {
        printf("Found %s at index #%d\n", studentName, index);
    }
    else
    {
        printf("Student %s is not found.\n", studentName);
    }

    // Get name to edit
    printf("Enter name to edit: ");
    scanf("%s", studentName);
    
    index = findStudentName(students, numOfStudents, studentName);

    if (index != numOfStudents)
    {
        printf("Found %s at index #%d\n", studentName, index);
        printf("Enter\n1: Edit Name\n2: Edit Age\n3: Edit Address\nYour choice: ");
        
        scanf("%d", &userChoice);
        switch (userChoice)
            {
            case 1 /* Edit name */:
                printf("Enter new name (up to 50 characters): ");
                // scanf("%s", newName);
                // strcpy(students[index - 1].name, newName);
                scanf("%s", students[index].name);
                printUpdatedStudentInfo(students, index);
                break;
            
            case 2 /* Edit age */:
                printf("Enter new age (must be integer): ");
                scanf("%d", &students[index].age);
                printUpdatedStudentInfo(students, index);
                // scanf("%d", newAge);
                // students[index - 1] = newAge;
                // strcpy(students[index - 1].age, newAge);
                break;
            
            case 3 /* Edit address */:
                printf("Enter new address (up to 50 characters): ");
                scanf("%s", students[index].address);
                printUpdatedStudentInfo(students, index);
                // scanf("%s", newAddress);
                // strcpy(students[index - 1].address, newAddress);
                break;
            default:
                break;
            }
    }
    else 
    {
        printf("Student %s is not found.\n", studentName);
    }

    
    return 0;
}


void getStudentInfo(struct Student students[], int numOfStudents)
{
    printf("Enter information of students:\n");
    // storing information
    for (int i = 0; i < numOfStudents; ++i) {
        printf("\nFor student #%d:\n", i + 1);
        printf("Name   : ");
        scanf("%s", students[i].name);

        printf("Age    : ");
        scanf("%d", &students[i].age);
        
        printf("Address: ");
        scanf("%s", students[i].address);
    }
}


void printStudentInfo(struct Student students[], int numOfStudents)
{
    printf("\nDisplaying Information:\n");

    // displaying information
    for (int i = 0; i < numOfStudents; ++i) {
        printf("\nStudent # %d\n", i + 1);
        printf("Name   : %s\n", students[i].name);
        printf("Age    : %d\n", students[i].age);
        printf("Address: %s\n", students[i].address);
    }
}


int findStudentName(struct Student students[], int numOfStudents, char studentName[])
{
    for (int i = 0; i < numOfStudents; i++)
    {
        if (strcmp(students[i].name, studentName) == 0)
        {
            return i;
        }
    }
    return numOfStudents;
}


void printUpdatedStudentInfo(struct Student students[], int index)
{
    printf("Updated info for Student %d: ", index);
    printf("Name   : %s\n", students[index - 1].name);
    printf("Age    : %d\n", students[index - 1].age);
    printf("Address: %s\n", students[index - 1].address);
    
}