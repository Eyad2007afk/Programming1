#include <stdio.h>

int main(void){
    int a;
    printf("give number : \n");
    scanf("%d", &a);

    if (a & 1){
        printf("odd num\n");
    } else {
        printf("even number\n");
    }
    int b; 
    printf("another num\n");
    scanf("%d", &b);
    if (!(b & 1)){
        printf("even num\n");
    } else {
        printf("odd number\n");
    }
    printf("another num \n");
    int c;
    scanf("%d", &c);
    if (!(b & 1)){
        printf("even num\n");
        int d = c | 1;
        printf("turned it odd hehe : %d\n", d);
    } else {
        printf("odd number\n");
    }
    printf("another\n");
    int e; 
    scanf("%d", &e);
    int f = (1 << 3);
    f = e ^ f;
    printf("you chose : %d\nI made it %d\n", e,f);
    int g = e & (~f);
    printf("now watch it dissintegrate : %d\n", g);
    return 0;
}