/* Hitesh P Patel
Title : WAP in C to store 10 names in 2D character Array and display them
*/

#include <stdio.h>
int main()
{
    char name[10][30];   // 10 students, max 29 characters per name
    int i;
    printf("Enter names of 10 students:\n");
    for(i = 0; i < 10; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%s", name[i]);   // reads single-word name
    }
    printf("\nList of Students:\n");
    for(i = 0; i < 10; i++)
    {
        printf("Student %d: %s\n", i + 1, name[i]);
    }
    return 0;
}
