#include <stdio.h>
#include <stdlib.h>
#include "algs.h"



int main (void){
    int ray[50];
    for (int i = 0; i < 50; i++){
        ray[i] = rand();
        printf("%d\n", ray[i]);
        
    }
    printf("end of printing unsorted array\n");
    SortStats stats;
    bubble_sort_optimized(ray, 50, &stats );
    printf("printing sorted array : \n");
    for (int b = 0; b < 50 ; ++b){
        printf("%d\n", ray[b]);
    
    }
}