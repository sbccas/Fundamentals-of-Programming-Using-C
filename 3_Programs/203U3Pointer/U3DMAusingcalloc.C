/*
WAP 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int *)calloc(5, sizeof(int));
    for(int i = 0; i < 5; i++)
        printf("Data =  %d Address = %p \n", p[i],(void *)&p[i]);       
    free(p);
    return 0;
}