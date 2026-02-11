/*
WAP in C to demonstrate the concept of array of pointers. The program should declare an array of pointers to integers, assign values to the integers, and then print the values using the array of pointers.
Developer: 
Date:

*/
#include <stdio.h>

int main() {
    char *names[] = {"A", "BHAVESH", "CHETAN","DHARMESH","ELISH","FULESH","GAURANG","HITESH","ILESH","JITEN","KIRAN"};

    for(int i = 0; i < 11; i++) {
    
        //printf("%s\n", names[i]);
        //Also print Address of each name
        printf("Address of %s: %p\n", names[i], (void*)names[i]);
    }

    return 0;
}