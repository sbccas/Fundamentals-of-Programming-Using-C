/* WAP to create a Structure to store information of a student in C*/
#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    struct Student s1;
    printf("Enter Roll No: ");
    scanf("%d", &s1.rollno);
    printf("Enter Name: ");
    scanf("%s", s1.name);
    printf("Enter Marks: ");
    scanf("%f", &s1.marks);
    printf("\nStudent Information:\n");
    printf("Roll No: %d\n", s1.rollno);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}