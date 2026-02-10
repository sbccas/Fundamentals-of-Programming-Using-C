/*
WAP in C to Demonstrate Recursion by calculating Factorial of a Number
DEVELOPER: Amroli BCA Depatment
Date: 20/01/2026
*/
#include <stdio.h>
int factorial(int n) {
    if (n == 0 ) {
        return 1; // Base case: factorial of 0 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}
int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    int result = factorial(number);
    printf("Factorial of %d is %d\n", number, result);
        printf("Press Enter to continue...");
    getchar(); // To wait for user input
    return 0;
}