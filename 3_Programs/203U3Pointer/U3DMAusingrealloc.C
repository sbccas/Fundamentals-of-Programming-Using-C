/*
WAP in c to show demo of Realloc Function
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int *)malloc(2 * sizeof(int));
    p = (int *)realloc(p, 4 * sizeof(int));

    for(int i = 0; i < 4; i++)
        p[i] = i + 1;

    for(int i = 0; i < 4; i++)
        printf("%d ", p[i]);

    free(p);
    return 0;
}