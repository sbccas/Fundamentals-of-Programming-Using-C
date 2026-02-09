/* Title: WAP to Reverse a String with and Without using String Method (strrev)
   Programmer: Hitesh Patel Year/Div: MSCIT Sem-1 RollNo: 999 
   Date: November 17, 2025
   U5P3StringCopyWithoutFunction.C
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[200],rev[200];
    int i,j;
    printf("Enter Name: ");
    gets(a);
   // printf("\nYour Name = %s",a);
   // printf("\nReverse Data = %s",strrev(a));
    //WITHOUT USING REVERSE FUNCTION
    j=0;
    for (i=strlen(a)-1;i>=0;i--)
    {
        rev[j] = a[i];
       // printf("a[i]=%c  i=%d j=%d rev=%s",a[i],i,j,rev);
        j++;
    }
    rev[j++]='\0';
    printf("\nYour Name = %s",a);
    printf("\nReverse Data = %s",rev);
    return 0;
}