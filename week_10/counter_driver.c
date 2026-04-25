#include <stdio.h>
#include "algs.h"
#include <stdlib.h>

int driver (int *a, size_t n ){
    for (int i = 0; i < n; i++){
        printf("%d\n", a[i]);
    }
        selection_sort(a,n);
        for(int k = 0 ; k < n; k++){
          
        }
          printf("list sorted by select sort : \n ", a[i]);
    //     insertion_sort(a, n);
    //      for(int k = 0 ; k < n; k++){
    //         printf("list sorted by insertion sort : \n ", insertion_sort);
    //    }
}


int main(void){
    int ray[10];
    for (int a = 0; a < 10 ; ++a){
        ray[a] = rand();
    }
    driver(ray, 10);
}