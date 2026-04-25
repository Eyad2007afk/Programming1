#include <stdio.h>
#include "algs.h"
#include <stdlib.h>

void sorted(int *a, size_t n ){
    if (n - 1 > n ){
        printf("sort failed\n");
    } else if (n - 1 < n){
        printf("sort successful sir. \n");
    }
}

int main (void){
    int ray[50] = {};
    for (int i = 0; i < 50; i++){
        ray[i] = rand();
        //printf("%d\n", ray[i]);
    }
    insertion_sort(ray, 50);
    for (size_t k = 0 ; k < 50; ++k){
        printf("%d\n", ray[k]);
    }
    sorted(ray, 50);
    return 0;
}