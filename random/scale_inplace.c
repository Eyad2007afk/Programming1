#include <stdio.h>

void scale_inplace(int *a, size_t n, int k){
for (int i = 0 ; i < n ; i++){
        printf("element number : %d\n ", a[i]);
        a[i] *= k;
        printf("element number multiplied by k  : %d\n ", a[i]);
}
}

int main(void){
    int syahira[5] = {22,33,44,55,11};
    size_t n =5;
        int k = 2; 
        scale_inplace(syahira, n, k);
    return 0;
}
