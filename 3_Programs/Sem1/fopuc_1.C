/* Hitesh P Patel
Title : WAP in C to show demo of sample structure named amroli 
where we will be storing data like sname , srollno, sdivsion, sper, sgrade
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct amroli
{
    char sname[20];
    int srollno;
    int sdivision;
    float sper;
    char sgrade;
};

int main()
{ 
struct amroli s1,s2,s3,s4;
printf("Enter the details of student 1:\n");
printf("Enter S1 Name");
scanf("%s",s1.sname);
printf("Enter S1 Roll No:");
scanf("%d",&s1.srollno);    
printf("Enter S1 Division:");
scanf("%d",&s1.sdivision);
printf("Enter S1 Percentage:");
scanf("%f",&s1.sper);
printf("Enter S1 Grade:");  
scanf(" %c",&s1.sgrade);
printf("Enter the details of student 2:\n");
printf("Enter S2 Name");
scanf("%s",s2.sname);
printf("Enter S2 Roll No:");
scanf("%d",&s2.srollno);    
printf("Enter S2 Division:");
scanf("%d",&s2.sdivision);
printf("Enter S2 Percentage:");
scanf("%f",&s2.sper);
printf("Enter S2 Grade:");  
scanf(" %c",&s2.sgrade);
printf("Display the details of student 1:\n");
printf("S1 Name:%s\n",s1.sname);
printf("S1 Roll No:%d\n",s1.srollno);
printf("S1 Division:%d\n",s1.sdivision);
printf("S1 Percentage:%.2f\n",s1.sper);
printf("S1 Grade:%c\n",s1.sgrade);
printf("Display the details of student 2:\n");
printf("S2 Name:%s\n",s2.sname);
printf("S2 Roll No:%d\n",s2.srollno);
printf("S2 Division:%d\n",s2.sdivision);
printf("S2 Percentage:%.2f\n",s2.sper);
printf("S2 Grade:%c\n",s2.sgrade);


return 0;
}