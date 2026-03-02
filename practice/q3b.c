#include <stdio.h>

int clamp(int x, int lo, int hi){

    if ( x < lo){
        return lo;
    } else if ( x > hi){
        return hi;

    }else {
        return x;
    }

}


int main(void){
    int x,lo,hi; 

    printf("enter 3 numbers : ");
    scanf("%d %d %d", &x, &lo, &hi);
    
    int result = clamp(x,lo,hi);
    printf("result is : %d\n", result);
    
    return 0;

}