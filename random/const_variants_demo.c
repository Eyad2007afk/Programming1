#include <stdio.h>

int main (void){
    int a = 1;
    int b = 2;
    int c = 3;
    const int *p = &a;
    int *const p2 = &b;
    const int *const p3 = &c;

    printf("result : %d\n", *p);
    printf("result : %d\n", *p2);
    printf("result : %d\n", *p3);

    p = &b;
    *p2 = 20;
    printf("result : %d\n", *p);
    printf("result : %d\n", *p2);


    return 0;
}