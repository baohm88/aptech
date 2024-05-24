#include <stdio.h>

// Structure to store student information 
struct Student
{ 
    char name[50]; 
    int age; char 
    address[100];
};

// Function to get students' info 
void getStudentInfo(struct Student students[], int numOfStudents)
{ 
    for (int i = 0; i < numOfStudents; i++)
    { 
        printf("Enter student %d name: ", i + 1); 
        scanf("%s", students[i].name); 
        printf("Enter student %d age: ", i + 1); 
        scanf("%d", &students[i].age); 
        printf("Enter student %d address: ", i + 1); 
        scanf("%s", students[i].address);
    }
}

// Function to print students' info 
void printStudentInfo(struct Student students[], int numOfStudents)
{ 
    for (int i = 0; i < numOfStudents; i++)
    { 
        printf("Student %d info:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age); 
        printf("Address: %s\n", students[i].address);
        printf("\n");
    }
}

int main()
{ 
    struct Student students[5]; 
    int numOfStudents = 5;

    getStudentInfo(students, numOfStudents);

    printf("\nStudents Information:\n");
    printStudentInfo(students, numOfStudents);

    return 0;
}