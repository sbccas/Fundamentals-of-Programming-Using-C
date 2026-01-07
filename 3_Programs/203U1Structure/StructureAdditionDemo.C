/*WAP in C using Structure to Show Demo of Addition */
#include <stdio.h>
struct distance 
{
    int feet;
    int inches;
    
} d1,d2,d3;
int main() 
{
    // Input first distance
    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inches);

    // Input second distance
    printf("\nEnter second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inches);

    // Adding distances
    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;

    // Converting inches to feet if greater than 12
    if (d3.inches >= 12) 
    {
        d3.feet += d3.inches / 12;
        d3.inches = d3.inches % 12;
    }

    // Displaying the result
    printf("\nSum of distances:\n");
    printf("Feet: %d\n", d3.feet);
    printf("Inches: %d\n", d3.inches);

    return 0;
}   