#include <stdio.h>

int sum_to(int n){
    if (n == 1 ){
        return 1;
    } else {
        return n + sum_to(n-1);
    }
}

int main(void){
    int n;

    printf("enter a number : \n");
    scanf("%d", &n);

    int sum = sum_to(n);
    printf("Result of all this is : %d\n", sum);
    return 0;
}