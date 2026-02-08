#include <stdio.h>
#include <limits.h>
//nclude <stdbool.h>

int main(){
    int a;
    scanf("%d", &a);

    if (a < 30){
        printf("Your mark is : D \n");
    } else if (a < 50 && a > 59){
        printf("Your mark is : C\n");
    } else if ( a < 60 && a > 69){
        printf("Your mark is : B\n");
    } else if (a < 70){
        printf("Your mark is : A\n");
    }
    return 0;
}

