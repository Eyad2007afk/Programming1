#include <stdio.h>
size_t sum_readonly(const int *a, size_t n){
    size_t sum = 0;
    for (size_t i=0; i<n;i++){
        sum += a[i];
    }
    return sum;
    
}
int main(void){
    int x =6, y = 7;
    const int* p = &x;
    int* q = &y;

    p = &y;

    printf("The address of x is : %p, and it is storing %d\n", p, *p);
    // printf("The address of y is : %q, and it is storing %d\n", q, *q);

    const float pi = 3.14159;



    return 0;


}