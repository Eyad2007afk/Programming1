#include <stdio.h>

int main(void){
    printf("Choose a metric, input a number, and get it in your desired metric : \n");
    printf("choose : \n 1. Celsius \n 2.fahren\n");
    int a, b;
    scanf("%d\n %d", &a, &b);
    int result = (b * 9/5) + 32;

    switch (a){
        case 1 :
            printf("your desired temp in Celsius is this : %d\n", b);
            break;
        case 2 : 
            printf("Your desired temp in fehr is this : %d\n", result);
            break;
        default :      
            printf("enter a valid number please\n");

    }

    
}