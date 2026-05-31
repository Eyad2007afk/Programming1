#include <stdio.h>
#include <stdlib.h>
#include "algs.h"
void swap_time(int *left, int *right ){
    if (left == 0 || right == 0){
        return;
    }
    int temp = *left;
    *left = *right; 
    *right = temp;
}
int main(void){
    srand(time(NULL));
    int ray[10] = {2,44,5,7,11,8,95,3,4,6};
    printf("BASIC UNSORTED ARRAY : \n");
    for (int i = 0; i < 10; i++){
        printf("%d ", ray[i]);
    }
    printf("\ngenerating a random number of shuffles\n");
    int a = rand() % (10-1);
    printf("random shuffles is : %d\n", a );
    for (int b = 0; b < a; b++){
    int pos = rand() %9;
        swap_ints(&ray[pos], &ray[pos + 1]);
    }
    printf("swapping : \n");
    for (int k = 0;  k < 10 ;  k++){
        printf("%d ", ray[k]);
    }
    SortStats stats;
    printf("\ntime to sort\n USING NORMAL BUBBLE SORT : \n");
    bubble_sort(ray, 10, &stats);
    for (int f = 0; f < 10; ++f){
        printf("%d ", ray[f]);
    }
    printf("\ntime to sort! \n USING OPTIMISED BUBBLE SORT : \n");
    bubble_sort_optimized(ray, 10, &stats);
    for (int g = 0; g < 10 ; ++g){
        printf("%d ", ray[g]);
    }

    return 0;
}