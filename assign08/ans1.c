#include <stdio.h>

int main() {
    
    struct Student {
        int rollNumber;
        char name[100];
        float marks;
    };

   
    struct Student student;

    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter Name: ");
    // Using fgets to read a string including spaces
    scanf(" %[^\n]%*c", student.name);

    printf("Enter Marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}

