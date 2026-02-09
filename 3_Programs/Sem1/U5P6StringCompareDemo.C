/* Title: WAP to Compare two Strings and Give Result. 
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
    char s1[20],s2[20];
    int ans;
    printf("Enter String1 =");
    scanf("%s",s1);
    printf("Enter String2 =");
    scanf("%s",s2);
    printf("S1= %s   , S2= %s",s1,s2);
    ans = strcmp(s1,s2);
    printf("\nASCII of S1 %d and ASCII of S2. %d",s1,s2);
    if(ans==0)
    {
    printf("\nS1 and S2 are Same.");
    }
    else if(ans>0)
    {    printf("\nS1 is greater than S2");}
    else{
         printf("\nS2 is greater than S1");
    }
return 0 ;
}

    
