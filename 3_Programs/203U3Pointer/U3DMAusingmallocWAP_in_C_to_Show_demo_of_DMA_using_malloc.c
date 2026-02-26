/*
WAP in C to Show demo of DMA using malloc
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int *)malloc(sizeof(int));
    *p = 10;
    printf("Data = %d , Address= %d", *p, p);
    free(p);
    return 0;
}