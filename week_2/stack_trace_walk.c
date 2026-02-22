#include <stdio.h>

void count(int n){
    // base case first 
    if (n < 0){
        return;
    }
    printf("%d\n", n);
    count(n-1);
    if (n > 0){
        printf("%d\n", n);
    }
}

int main(){
    printf("enter a number : \n");
    int a;
    scanf("%d", &a);
    printf("watch this : \n");
    count(a);
    printf("\n");
    return 0;

}