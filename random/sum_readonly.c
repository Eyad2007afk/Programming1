#include <stdio.h>

 size_t sum_readonly(const int *a,size_t n){
    size_t sum = 0;
    for (size_t i = 0 ; i < n; i++){
         sum = sum + a[i];
    }
         return sum;
}
int main(void){
    int a[6] = {10,40,55,642,33,69};
    int n = 6;
    size_t result = sum_readonly(a , n);
               printf("summing an array: %zu\n", result);

    return 0;
}