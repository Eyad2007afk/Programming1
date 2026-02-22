#include <stdio.h>

int factorial (int n){
    if (n <=1){
        return 1;
    }
    return n * factorial(n-1);
}
int main (void){
    printf("factorial of 0 is  : %d\n", factorial(0));
    printf("factorial of 1 is  : %d\n", factorial(0));
    printf("factorial of 5 is  : %d\n", factorial(5));

    return 0;
    
}
