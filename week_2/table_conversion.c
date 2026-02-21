#include <stdio.h>

int main(void){
    printf("%-8s", "Celsius");
    printf("%10s", "Fahrenheit : ");
    int a;
    if (scanf("%d", &a) != 1){
        printf("invalid input \n");
        return 0;
    }
    for (int i = a; i<=10; i++){

    int result = (i * 9/5) + 32; 
    printf("%6d", i);
    printf("%8d\n", result);
    }


    return 0;
}