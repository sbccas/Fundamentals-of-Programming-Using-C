/* Title: WAP to count and replace given Character by user in a Character Array
   Programmer: Hitesh Patel Year/Div: MSCIT Sem-1 RollNo: 999 
   Date: November 17, 2025
   U5P1StringData.C
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    char charToCount, cr;
    int count = 0, i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character to count: ");
    scanf(" %c", &charToCount);
    printf("Enter the character to Replace: ");
    scanf(" %c", &cr);
    // Counting occurrences and replacing characters
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == charToCount) {
            count ++;
            printf("%c",cr);
        }
        else
        {
            printf("%c",str[i]);
        }
    }

    printf("\nThe character '%c' occurred %d times.\n", charToCount, count);
    

    return 0;
}   