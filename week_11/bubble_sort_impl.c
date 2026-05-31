#include <stdio.h>
#include <stdlib.h>
#include "algs.h"


int main (void){
    int ray[10];
    for (int i = 0; i < 10 ; i++){
        ray[i] = rand();
       //printf(",%d\n ,", ray[i]);
        
    }
    bubble_sort(ray, 10, NULL);
        for (int a = 0; a < 10 ; a++){
            printf("%d\n", ray[a]);
        }
}