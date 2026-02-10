/*
WAP in C to Demonstrate Recursion by calculating Factorial of Number
FROM 1 TO 20 in single run. 
where to handle larger results use long long int instead of int
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
    printf("Factorials from 1 to 20:\n");
    for (int i = 1; i <= 20; i++) {
        long long int result = factorial(i);
        printf("Factorial of %d is %lld\n", i, result);
    }
    printf("Press Enter to continue...");
    getchar(); // To wait for user input
    return 0;
}