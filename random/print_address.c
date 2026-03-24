#include <stdio.h>

int main(void){
    int a = 1;
    double b = 1.1;
    char c = 'C';
    printf("a : %d\n", a);
    printf("b : %.2f\n", b);
    printf("c : %c\n", c);
    int *d = &a;
    double *e = &b;
    char *f = &c;
    printf("ptr d : %p\n", (void*)&a);
    printf("ptr e : %p\n", (void*)&e);
    printf("ptr f : %p\n", (void*)&f);

    return 0;


}