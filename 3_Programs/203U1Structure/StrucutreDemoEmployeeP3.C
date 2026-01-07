/*WAP to create a Structure to store information of an employee in C*/
#include <stdio.h>
#include <string.h>                 
//
struct Employee 
{
    int empId;
    char ename[50];
    char edept[50];
    char erole[50];
    float esalary;
} e1,e2,e3;

int main() 
{
    // Input employee 1 details
    printf("Enter details for Employee 1:\n");
    printf("Employee ID: ");
    scanf("%d", &e1.empId);
    printf("Name: ");
    scanf("%s", e1.ename);
    printf("Department: ");
    scanf("%s", e1.edept);
    printf("Role: ");
    scanf("%s", e1.erole);
    printf("Salary: ");
    scanf("%f", &e1.esalary);

    // Input employee 2 details
    printf("\nEnter details for Employee 2:\n");
    printf("Employee ID: ");
    scanf("%d", &e2.empId);
    printf("Name: ");
    scanf("%s", e2.ename);
    printf("Department: ");
    scanf("%s", e2.edept);
    printf("Role: ");
    scanf("%s", e2.erole);
    printf("Salary: ");
    scanf("%f", &e2.esalary);

    // Input employee 3 details
    printf("\nEnter details for Employee 3:\n");
    printf("Employee ID: ");
    scanf("%d", &e3.empId);
    printf("Name: ");
    scanf("%s", e3.ename);
    printf("Department: ");
    scanf("%s", e3.edept);
    printf("Role: ");
    scanf("%s", e3.erole);
    printf("Salary: ");
    scanf("%f", &e3.esalary);

    // Display employee details
    printf("\nStored Employee Details:\n");

    printf("\nEmployee 1:\n");
    printf("Employee ID: %d\n", e1.empId);
    printf("Name: %s\n", e1.ename);
    printf("Department: %s\n", e1.edept);
    printf("Role: %s\n", e1.erole);
    printf("Salary: %.2f\n", e1.esalary);

    printf("\nEmployee 2:\n");
    printf("Employee ID: %d\n", e2.empId);
    printf("Name: %s\n", e2.ename);
    printf("Department: %s\n", e2.edept);
    printf("Role: %s\n", e2.erole);
    printf("Salary: %.2f\n", e2.esalary);


    // DIsplay employee 3 details
    printf("\nEmployee 3:\n");
    printf("Employee ID: %d\n", e3.empId);
    printf("Name: %s\n", e3.ename);
    printf("Department: %s\n", e3.edept);
    printf("Role: %s\n", e3.erole);
    printf("Salary: %.2f\n", e3.esalary);

// Size of Structure
printf("\nSize of Employee Structure: %lu bytes\n", sizeof(struct Employee));
printf("Size of Employee 1: %lu bytes\n", sizeof(e1));
printf("Size of Employee ID field: %lu bytes\n", sizeof(e1.empId));
printf("Size of Name field: %lu bytes\n", sizeof(e1.ename));
printf("Size of Department field: %lu bytes\n", sizeof(e1.edept));
printf("Size of Role field: %lu bytes\n", sizeof(e1.erole));
printf("Size of Salary field: %lu bytes\n", sizeof(e1.esalary));
    return 0;
}