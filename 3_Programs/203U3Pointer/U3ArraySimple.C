/*
WAP to show demo how data is stored in Array without using pointer in C.
Developer: Amroli MScIT Department
Date: 29-01-2026
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    //Program without using malloc
    int arr1[5];
    printf("Enter 5 elements for arr1:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }
    // Display array elements
    printf("\nArray Elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, arr1[i]);
    }
    
 return 0;
}