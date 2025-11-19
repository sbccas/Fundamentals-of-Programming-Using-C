/* Title: WAP to show Demo of Character Array and Calculate Lenght of Array withour Using Strlen Function: 
   Programmer: Hitesh Patel Year/Div: MSCIT Sem-1 RollNo: 999 
   Date: November 17, 2025
   U5P1StringData.C
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char a3[20]= {'H','i',' ','T','h','e','r','e','\0'};
    char a1[10];
    char a2[14]="HelloWorld123";
    int i, count1,count2,count3;
    printf("Enter a string ");
    gets(a1);   
    printf("String a1: %s\n",a1);
    printf("String a2: %s\n",a2);
    printf("String a3: %s\n",a3);   
  
    for (i=0; a1[i]!='\0'; i++)
    {
        count1 = i;
    }
    for (i=0; a2[i]!='\0'; i++)
    {
        count2 = i;
    }
     for (i=0; a3[i]!='\0'; i++)
    {
        count3 = i;
    }
    printf("Length of String a1: %d\n",count1+1);
    printf("Length of String a2: %d\n",count2+1);
    printf("Length of String a3: %d\n",count3+1);

    return 0;
}

