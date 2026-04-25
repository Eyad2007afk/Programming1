#include <stdio.h>
#include "algs.h"
#include <stdlib.h>

int compy(const void *a, const void *b){
    return (*(int *) a - *(int *)b);
}
int main (void){
    int sizes[10] = {55,15,4,3,67,50,1,100,87,9};
    int n = sizeof(sizes) / sizeof(sizes[0]);
    int secres = binary_search(sizes, 10, 67);
    printf("searching for the number 67 using bin search.... \n");
    printf("here : %d\n", secres);
    qsort(sizes, n, sizeof(sizes[0]), comp);
    printf("sorted list : ");
    for (int i = 0; i < 10; ++i){
        printf("%d ", sizes[i]);
        
    }
    int result = linear_search(sizes, 10, 4);
    
    printf("searching for the number 4 using lin search.... \n");
    printf("here : %d\n",result);
   

    return 0;
}
    

