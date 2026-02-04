/*
WAP to show demo how data is stored in Array using pointer in C.
Also it should display Address of each element using pointer arithmetic.
Developer: Amroli MScIT Department
Date: 29-01-2026
*/
#include <stdio.h>  
#include <stdlib.h>
int main() {
    //Program using pointer
    int arr1[10];
    int *pArr = arr1; // Pointer to the first element of the array
    printf("Enter 5 elements for arr1:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", pArr + i); // Using pointer arithmetic to access array elements
    }
    // Display array elements and their addresses
    printf("\nArray Elements and their Addresses:\n");
    for(int i = 0; i < 10; i++) {
        printf("Element %d: %d, Address: %p\n", i + 1, *(pArr + i), (void*)(pArr + i));
    }       
    return 0;
}

