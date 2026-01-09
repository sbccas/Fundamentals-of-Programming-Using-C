/*
NAME: NestedStructureDemo.C
DESCRIPTION: WAP in C to demonstrate Nested Structures take example of Employee with Address as nested structure.
AUTHOR: Amroli BCA
DEVELOPER: Amroli BCA Depatment 
Date: 06 Jan 2026
*/

// Inner Structure (e.g., Address)
struct Address {
    char city[50];
    int pincode;
};
// Outer Structure (e.g., Employee)
struct Employee {
    char name[100];
    int empId;
    struct Address homeAddress; // Nested structure as a member
};
#include <stdio.h>  
#include <string.h>
#include <stdlib.h>
int main() 
{
    struct Employee emp;
    // Input employee details
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);
    
    printf("Enter Employee ID: ");
    scanf("%d", &emp.empId);

    printf("Enter City: ");
    scanf("%s", emp.homeAddress.city);

    printf("Enter Pincode: ");
    scanf("%d", &emp.homeAddress.pincode);

    // Display employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.empId);
    printf("City: %s\n", emp.homeAddress.city);
    printf("Pincode: %d\n", emp.homeAddress.pincode);

     //Size of Structures
    printf("\nSize of Address Structure: %zu bytes\n", sizeof(struct Address));
    printf("Size of Employee Structure: %zu bytes\n", sizeof(struct Employee));
    
    return 0;
}

