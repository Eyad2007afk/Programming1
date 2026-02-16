#include <stdio.h>

int a;
unsigned int b;

int main (){
    scanf("%d %u", &a, &b);
    printf("lets compare shall we : ");
    printf("you chose these two numbers : %d & %u \n", a, b);
    if (a > b){
        printf("the int is greater than the unsigned int somehow \n",  a,b);
    } else if (a < b){
        printf("turns out the unsigned int is greater than the negative int \n", a,b);
    } else {
        printf("none of them is greater than the other my g...\n", a,b);
    }
    

    return 0;
}
