#include <stdio.h>

void swap_int(int* a, int* b){
    int temp = *a;
    int *a = *b;
    int *b = temp;
}

int main(void){
    printf("enter two numbers : \n");

    int a,b;
    scanf("%d %d", &a, &b);
    int temp = a;
    int a = b;
    int b = temp;

    

    printf("swapping the two numbers : \n a : %d b :%d\n", a,b);


}