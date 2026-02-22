#include <stdio.h>

void fib (int n){
    if (n >=  150){
    return;
    }
    printf("%d\n", n + 1);
    // fib(n+1);


}
int main(){
    printf("enter a number : \n");
    int a;
    scanf("%d", &a);
    fib(a);
    printf("\n");
    return 0;
}