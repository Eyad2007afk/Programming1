#include <stdio.h>

void swipswap(int *m, int *n){
    int amp = *m;
    *m = *n;
    *n = amp;
}
int main (void){
    int a = 55;
    int *ptr;
    ptr = &a;
    printf("STEP 1 |||||||||||\n");
    printf("this is my number : %d\n", a);
    printf("This is the address of my data : %p\n", (void*)&a);
    printf("STEP 2|||||||||\n");
    printf("my data lives at %p\n ", (void*)&a);
    printf("my ptr contains : %p\n",(void*)&ptr);

    if (ptr == &a){
        printf("pointer link to address successful");
    }
    printf("STEP 3|||||||\n");
    printf("before my data was : %d\n", a);
    *ptr = 67;
    printf("now my data is %d\n", a);
    printf("STEP 4||||||\n");
    printf("swap time: \n ");
    int b = 2;
    int c = 3;
    int *p;
    int *q;
    printf("Before, b : %d\n", b);
    printf("Before, c : %d\n", c);
    // p = &b;
    // printf("address of b : %p\n", (void*)&b);
    // printf("value of p : %p\n", (void*)ptr);
    p = &b;
    q = &c;
    *p = c;
    *q = b;
    printf("after, b : %d\n", b);
    printf("after, c : %d\n", c);
    printf("STEP AGAIN |||||\n");
    int d = 55; 
    int e = 67; 
    printf("g : %d\ne : %d\n", d,e);
    int *g = &d;
    int *f = &e;
    int temp = *g;
    *g = *f;
    *f = temp;
    printf("g : %d\ne : %d\n", d,e);
    
   
    
    
    printf("g : %d\n", d);
    int gold = 420; 
    int silver = 69;
    printf("Gold : %d\nSilver : %d\n", gold,silver);
    swipswap(&gold, &silver);
    printf("Gold : %d\nSilver : %d\n", gold,silver);

    return 0;

}