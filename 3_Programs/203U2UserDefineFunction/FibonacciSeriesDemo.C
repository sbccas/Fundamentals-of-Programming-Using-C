/*
WAP in C to showe demo of Fibonacci Series using Recursion
DEVELOPER: Amroli BCA Depatment 
Date: 20/01/2026
*/
#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: Fibonacci of 0 is 0
    } else if (n == 1) {
        return 1; // Base case: Fibonacci of 1 is 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}
int main() {
    int n;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci Series up to %d terms:\n", n);
        for (int i = 0; i < n; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }
    printf("Press Enter to continue...");
    getchar(); // To consume the newline character left by scanf
    getchar(); // To wait for user input
    return 0;
}