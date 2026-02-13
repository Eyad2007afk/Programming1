#include <stdio.h>
#include "math_util.h"


int main (void){
    printf("welcome to home baked calc\n");
    printf("it aint much but its honest work\n");
    printf("1.add\n2.subtract\n3.multiply\n4.divide\n");

    printf("enter two numbers and choose an option from above please kind sir : \n");

    int a = 0, b = 0, choice =0;
    scanf("%d %d %d", &a, &b, &choice);

    printf("Operands : %d and %d\n", a,b);
    printf("operations : %d\n", choice);


    switch(choice){
        case 1:
            printf("Answer : %d\n", add(a,b));
            break;
        case 2:
            printf("Answer : %d\n", subtract(a,b));
            break;
        case 3:
            printf("Answer : %d\n", multiply(a,b));
            break;
        default :
            printf("wont work..\n");
    }
    return 0;
}
