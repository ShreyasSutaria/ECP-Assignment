/*Write a program to accept Employee Id , Department No, Designation from user and display
output with reference to following tables 
Example:
If input given is
Employee Id
: 101
Dept No
: 30
Designation Code
: M
Then output should be:
Employee with employee id 101 is working in "Sales" department as "Manager".
*/


#include <stdio.h>

int main() {
    int empId, deptNo;
    char dsgnCode;
    char deptName[20];
    char designation[20];

    printf("Enter Employee Id: ");
    scanf("%d", &empId);
    printf("Enter Department No (10, 20, 30, 40): ");
    scanf("%d", &deptNo);
    printf("Enter Designation Code (M, S, s, C): ");
    scanf(" %c", &dsgnCode);  
    switch (deptNo) {
        case 10:
            sprintf(deptName, "Marketing");
            break;
        case 20:
            sprintf(deptName, "Management");
            break;
        case 30:
            sprintf(deptName, "Sales");
            break;
        case 40:
            sprintf(deptName, "Designing");
            break;
        default:
            printf("Invalid Department Number!\n");
            return 1;
    }

    switch (dsgnCode) {
        case 'M':
            sprintf(designation, "Manager");
            break;
        case 'S':
            sprintf(designation, "Supervisor");
            break;
        case 's':
            sprintf(designation, "Security Officer");
            break;
        case 'C':
            sprintf(designation, "Clerk");
            break;
        default:
            printf("Invalid Designation Code!\n");
            return 1;
    }
    printf("Employee with employee id %d is working in \"%s\" department as \"%s\".\n", empId, deptName, designation);

    return 0;
}

