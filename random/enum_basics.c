#include <stdio.h>

typedef enum { 
    R = 1,
    A, 
    N = 3,
    D, 
    Y = 6,
}randy_t;

int main(void){
    printf("pick a letter fn : \n R \n A \n n \n d \n y\n");
    int c;
    scanf("%d", &c);
    switch (c){
        case R : printf ("boring choice \n");
        break;
        case A :  printf ("this is not bad honestly \n");
        break;
        case N : printf ("you might've struck gold w that one \n");
        break;
        case D : printf("okay getting just a lil better icl \n");
        break;
        case Y : printf("boring but on the other side \n");
        break;
        default : printf("you had all these options and you chose nothing...");
    }
    return 0;
}