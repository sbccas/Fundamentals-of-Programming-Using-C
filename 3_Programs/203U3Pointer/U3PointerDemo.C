/*
WAP to show demo of Pointers 
of different data types in C.
Developer: Amroli MScIT Department
Date: 27-01-2026
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    // Pointer to int
    int a = 999;
    int *pInt = &a;
    printf("Integer Value: %d, Address: %p\n", *pInt, (void*)pInt);
    printf("Integer Value: %d, Address: %p\n", a, (void*)&a);

    // Pointer to float
    float b = 20.5f;
    float *pFloat = &b;
    printf("Float Value: %.2f, Address: %p\n", *pFloat, (void*)pFloat);
    printf("Float Value: %.2f, Address: %p\n", b, (void*)&b);


    // Pointer to char
    char c = 'A';
    char *pChar = &c;
    printf("Char Value: %c, Address: %p\n", *pChar, (void*)pChar);
    printf("Char Value: %c, Address: %p\n", c, (void*)&c);

    // Pointer to double
    double d = 30.12345;
    double *pDouble = &d;
    printf("Double Value: %.5lf, Address: %p\n", *pDouble, (void*)pDouble);
    printf("Double Value: %.5lf, Address: %p\n", d, (void*)&d);
     
    // Print address of *pInt
    printf("Address of pointer pInt: %p\n", (void*)&pInt);
    return 0;
}
