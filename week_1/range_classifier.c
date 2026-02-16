#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main(){
    int a;
    scanf("%d", &a);
    if (a <= 30){
        printf("You suck bruh omg\n");
    } else if (a <= 50) {
        printf("maybe you dont suck after all...take a C\n");
    } else if (a <= 60){
        printf("Dam it looks like your good after all, you deserve a B\n");
    } else if (a <= 70){
        printf("Okay you're good dawg, take a B+\n");
    } else if (a <= 100){
        printf("you the goat, straight A\n");
    }
    return 0;
}
