/*WAP to Create a Structure of Student and Store and Retrive Information Using For Loop*/
#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
struct Student {
    int rollno;
    char name[50];
    float marks;
};
int main() {
    struct Student sobj[3];
    // Input student details
    for(int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &sobj[i].rollno);
        printf("Name: ");
        scanf("%s", sobj[i].name);
        printf("Marks: ");
        scanf("%f", &sobj[i].marks);
    }
    // Display student details
    printf("\nStored Student Details:\n");
    for(int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", sobj[i].rollno);
        printf("Name: %s\n", sobj[i].name);
        printf("Marks: %.2f\n", sobj[i].marks);
    }
    printf("Size of Student Structure: %zu bytes\n", sizeof(struct Student));
    printf("Size of Individual Members:\n");
    printf("Roll No: %zu bytes\n", sizeof(sobj[0].rollno));
    printf("Name: %zu bytes\n", sizeof(sobj[0].name));
    printf("Marks: %zu bytes\n", sizeof(sobj[0].marks));
    
    return 0;
}

