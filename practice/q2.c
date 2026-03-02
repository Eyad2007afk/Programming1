#include <stdio.h>

int main(void){
    printf("enter a number : \n");
    int a;
    scanf("%d", &a);
    if ( a < 0){
        printf("NEG\n");
    } else if ( a == 0){
        printf("ZERO\n");
    } else {
        printf("POSITIVE\n");
    }
    switch(a){
        case -1 : printf("SPECIAL\n");
        break;
        case 0 : printf("SPECIAL\n");
        break;
        case 1 : printf("SPECIAL\n");
        break;
        default : break;
    }

    // part b 
    printf("enter another number : \n");
    int b;
    scanf("%d", &b);
    int sum = 0;
    for (int i = 1; i <= b; i++){
        sum += i;
    }
    printf("sum = : %d\n", sum);
    return 0;

    

}