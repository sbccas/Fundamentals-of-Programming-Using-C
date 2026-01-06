/* Title: WAP to to Join two String without using strcat function and with using strcat 
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
    char s1[20],s2[20],s3[40],s4[40];
    
    int i,k;
printf("\nEnter Data for S1:");
scanf("%s",s1);
printf("\nEnter Data for S2:");
scanf("%s",s2);
k=0;
for(i=0;i<strlen(s1);i++)
{
    s3[k]= s1[i];
    k++;
}
for(i=0;i<strlen(s2);i++)
{
    s3[k]= s2[i];
    k++;
}
s3[k]='\0';
printf("Data of S3: %s",s3);
strcat(s1,s2);
printf("New String S1: %s",s1);
printf("New String S2: %s",s2);

return 0;
}
