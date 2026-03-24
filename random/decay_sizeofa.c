#include <stdio.h>

void f(int a[], size_t n){
    printf("size of array is : %zu\n", sizeof(a));
    printf("size of one thing inside a  is : %zu\n", sizeof(*a));



}

int main(void){
    int a[2] = {0,1};
    size_t totalsize = sizeof(a);
    size_t indivsize = sizeof(*a);
    size_t n = indivsize / totalsize;

    printf("here we go : \n");
    printf("size of array is %zu\n", sizeof(a));
    printf("size of one thing inside a  is : %zu\n", sizeof(*a));
    f(a,n);


    return 0;


}