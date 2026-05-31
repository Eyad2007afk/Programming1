#include <stdio.h>

int main (void){
    int a = 0; 
    for (int a = 1; a <= 100 ; a++){
        if ( a % 5 == 0 && a % 3 == 0){
            printf("fizzbuzz\n");
        } else if (a % 5 == 0){
            printf("buzz\n");
        } else if (a % 3 == 0 ){
            printf("fizz\n");
        } else {printf("%d\n",a );};

    }
    return 0;
}