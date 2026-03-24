#include <stdio.h>

void swipswap(int *m, int *n){
    int amp = *m;
    *m = *n;
    *n = amp;
}

int main(void){
    int a = 2, b = 3;
    printf("original : \n a : %d, b : %d\n", a,b);
    swipswap(&a,&b);
    printf("mod : \n a : %d, b : %d\n", a,b);

    return 0;
}