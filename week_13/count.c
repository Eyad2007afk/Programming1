#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "algs.h"

int main (void){
    int ray[10000];
    for (int a = 0; a < 10000 ; a++){
        ray[a] = rand();
        //printf("%d\n", ray[a]);
    }
    countSort(ray, 10000);
    for (int b = 0 ; b < 10000 ; b++){
        printf("%d\n", ray[b]);
    }
    return 0;
}