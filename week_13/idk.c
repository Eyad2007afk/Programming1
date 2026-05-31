#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "algs.h"

int main (void){
    int ray[1000];
    for (int a = 0; a < 1000 ; a++){
        ray[a] = rand();
        //printf("%d\n", ray[a]);
    }
    mergeSort(ray,0, 999);
    for (int b = 0 ; b <1000 ; b++){
        printf("%d\n", ray[b]);
    }
    return 0;
}