/*
WAP in C to Demonstrate Recursion by calculating Sum of N Numbers
DEVELOPER: Amroli BCA Depatment
Date: 20/01/2026
*/
#include <stdio.h>
int sumOfN(int n) {
    if (n == 0) {
        return 0; // Base case: sum of 0 is 0
    } else {
        return n + sumOfN(n - 1); // Recursive case
    }
}
int main() {
    int n;
    printf("Enter a positive integer to calculate the sum of first N numbers: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int result = sumOfN(n);
        printf("The sum of the first %d numbers is: %d\n", n, result);
    }
    printf("Press Enter to continue...");
    getchar(); // To consume the newline character left by scanf
    getchar(); // To wait for user input
    return 0;
}