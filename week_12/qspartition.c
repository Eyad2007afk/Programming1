#include <stdio.h>
#include <stddef.h>
#include "algs.h"
#include <stdlib.h>

int main (void){
    int ray[1000];
    for (int a = 0 ; a < 1000; a++){
        ray[a] = rand();
        //printf("%d\n", ray[a]);
    }
    quickSort(ray,0, 999 );
    printf("Sorted array");
    for (int b = 0; b < 1000 ; b++){
        printf("%d\n", ray[b]);
    }
    return 0;
}
