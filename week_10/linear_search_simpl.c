#include <stdio.h>
#include "algs.h"


int main (void){
    int sizes[11] = {1,55,23,4,8,67,200,11,9,0,5};
    int result = linear_search(sizes,11, 55);
    printf("searching through this algorithm : %d\n", result);
    
    //CHECK THE TIME TAKEN FOR EXTRA KNOWLEDGE 
   
        clock_t start = clock();
        test(result);
        clock_t end = clock();
        double time_taken = (double) (end - start) / CLOCKS_PER_SEC;
        printf("time taken to search :  %f\n", result, time_taken);
  return 0;  
}