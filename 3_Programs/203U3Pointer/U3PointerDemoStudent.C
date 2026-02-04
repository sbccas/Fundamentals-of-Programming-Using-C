/*
WAP in C to show demo of Pointer for Accessing Student 
Information like Roll No, SID (10 Digits),Name, Percentage without using structure.
Developer: Amroli MScIT Department
Date: 04-02-2026
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    // Student information variables
    int rollNo;
    char name[100];
    long long SID; // 10-digit SID
    float percentage;

    // Pointers to the student information variables
    int *pRollNo = &rollNo;
    char *pName = name; // Array name acts as a pointer to its first element
    long long int *pSID = &SID;
    float *pPercentage = &percentage;

    // Input student details using pointers
    printf("Enter Roll No: ");
    scanf("%d", pRollNo);
    
    printf("Enter Name: ");
    scanf("%s", pName);
    
    printf("Enter SID: ");
    scanf("%lld", pSID);
    
    printf("Enter Percentage: ");
    scanf("%f", pPercentage);
    
    // Display student details using pointers
    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", *pRollNo);
    printf("Name: %s\n", pName);
    printf("SID: %lld\n", *pSID);
    printf("Percentage: %.2f\n", *pPercentage);
    
    return 0;
}
