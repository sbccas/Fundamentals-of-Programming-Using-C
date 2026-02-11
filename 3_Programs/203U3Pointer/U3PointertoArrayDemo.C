/*
WAP in C to demonstrate the concept of pointer to an array. 
The program should declare a pointer to an array of integers, assign values to the integers, and then print the values using the pointer to the array.
Developer:
Date:
*/

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3};
    int (*p)[5] = &arr;

    for(int i = 0; i < 5; i++) {
        printf("%d ", (*p)[i]);
        //Also print Address of each element    
        printf("(Address: %p)\n ", (void*)&(*p)[i]);
    }

    return 0;
}