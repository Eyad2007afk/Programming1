#include <stdio.h>
#include "algs.h"


int main(void){
    int sizes[7] = {125,3,55,15,6,90,44};
    selection_sort(sizes, 7);
    printf("sorting list...");
    for (int i = 0; i < 7; ++i){
        printf("%d ", sizes[i]);
    }
   int result =  binary_search(sizes, 7, 90);
    printf("now searching for the number 90 in this sorted list...\n");
    printf("here is the position : %d\n", result);
    return 0;
    
}
