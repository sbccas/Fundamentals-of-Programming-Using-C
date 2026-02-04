/*
WAP to show demo of User Defined Function where we will be able to pass
Structure object as Value to the function and display the structure members inside the function.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Define a structure to represent a Student
struct Student {
    char name[100];
    int rollNo;
    float marks;
};
// Function to display student details
void displayStudent(struct Student stu) {
    stu.marks += 5.0; // Adding grace marks for demonstration
    printf("\nStudent Details:\n");
    printf("Name: %s\n", stu.name);
    printf("Roll No: %d\n", stu.rollNo);
    printf("Marks: %.2f\n", stu.marks);

}
int main() {
    struct Student student;
    // Input student details
    printf("Enter Student Name: ");
    scanf("%s", student.name);
    
    printf("Enter Roll No: ");
    scanf("%d", &student.rollNo);
    
    printf("Enter Marks: ");
    scanf("%f", &student.marks);
    
    // Call the function to display student details
    displayStudent(student);

    // Displaying original marks to show that the original structure is unchanged
    printf("\nOriginal Marks in main(): %.2f\n", student.marks);
    
    
    return 0;
}   