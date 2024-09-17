#include <stdio.h>


struct Student {
    int rollNumber;
    char name[100];
    float marks;
};

void accept(struct Student *s) {
    printf("Enter Roll Number: ");
    scanf("%d", &s->rollNumber);

    printf("Enter Name: ");
    // Using fgets to read a string including spaces
    scanf(" %[^\n]%*c", s->name);

    printf("Enter Marks: ");
    scanf("%f", &s->marks);
}


void print(const struct Student *s) {
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", s->rollNumber);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
}

int main() {
    struct Student s;

    accept(&s);

    // Print the student information
    print(&s);

    return 0;
}
