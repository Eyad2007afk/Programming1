#include <stdio.h>

int main(void){
    int hi[5] = {1,2,3,4,5,6};
    int *a = &hi[0];
    int *b = &hi[2];
    printf("raw : \n a = %d, b = %d", (void*)*a,(void*)*b);
    int result = b - a;
    int distance = (char*)b - (char*)a;
    printf("\nresult of arithmetic : %td", result);
    printf("\nresult of distance : %zu", distance);


    return 0;
}