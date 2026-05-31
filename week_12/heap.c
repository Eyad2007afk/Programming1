#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "algs.h"

int main (void){
    int ray[] = {2,43,7,100,9,11};
    printf("ARRAY BEFORE SORTING\n");
    for (int b = 0; b <6 ; b++){
        printf("%d\n", ray[b]);
    }
    printf("array after sorting\n");
    heapSort(ray, 6);
    for (int a = 0; a < 6; a++){
        printf("%d\n", ray[a]);
    }
    return 0;

}
