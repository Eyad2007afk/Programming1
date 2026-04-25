#include <stdio.h>
#include "algs.h"
#include <stdlib.h>

int main(void){
    int ray[1000000] = {};
    int ray1[5000000] = {};

    for (int i = 0; i <100000000 ; i++){
        ray[i] = rand();
        //printf("%d, " ,ray[i]);
    }
    for (int k = 0; k < 500000000; k++ ){
        ray1[k] = rand();
        //printf("\n %d" , ray1[k]);
    }
    selection_sort(ray, 1000000);
    selection_sort(ray1, 5000000);
    
        //linear search and timing
        clock_t start = clock();
        int res= linear_search(ray, 1000000, 7711);
        clock_t end = clock();
        printf("\nwe're looking for the position of NO. 7711...\n here : %d\n ", res);
        double time_taken = (double) (end - start) / CLOCKS_PER_SEC;
        printf("time taken to search : %f\n",time_taken);
        // binary search and timing
        clock_t start1 = clock();
        int secres = binary_search(ray1, 5000000,13290 );
        clock_t end1 = clock();
        printf("\nwe're looking for the position of NO. 13290...\n here : %d\n ", secres);
        double time_taken1 = (double) (end1 - start1) / CLOCKS_PER_SEC;
        printf("time taken to search : %f\n",time_taken1);

    return 0;
}
     
   
  

