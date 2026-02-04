/*
WAP to show demo of User Defined Function where
we will be able to pass Array as Reference to the function
and display the array elements inside the function.
Developer: Amroli MScIT Department
Date: 27-01-2026
*/
#include <stdio.h>
#include <stdlib.h>
// Function to display array elements
void displayArray(int arr[], int size) {
    printf("\nArray Elements:\n");
    for(int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }
}
int main() {
    //Program without using malloc
    int arr1[5];
    printf("Enter 5 elements for arr1:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }
    // Call the function to display array elements
    displayArray(arr1, 5);
    arr1[0] = 1111;
    arr1[1] = 2222;
    arr1[2] = 3333;
    arr1[3] = 4444;
    arr1[4] = 5555;
    //Value checking after function call
    printf("\nArray elements in main() after function call:\n");    
    for(int i = 0; i < 5; i++) 
    {
        printf("Element %d: %d\n", i + 1, arr1[i]);
    }   
 return 0;
}