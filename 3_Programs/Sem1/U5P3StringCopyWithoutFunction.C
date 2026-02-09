/* Title: WAP to get data into one character Array and copy it to another Array
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
  char s1[20], s2[20];
  char m1[200],m2[20];
  int i =0;
printf("Enter Data for String 1: ");
gets(s1);
printf("Data = %s",s1);
// Each and Every Element of S1 to S2
for (i=0;s1[i]!='\0';i++)
{
     s2[i] = s1[i];
}
 s2[i]='\0';
 printf("Data of Array2 : %s",s2);
printf("Enter Data for M1=");
gets(m1);
strcpy(m2,m1);
printf("\nData of M1 = %s",m1);
printf("\nData of M2 = %s",m2);

 return 0;
}