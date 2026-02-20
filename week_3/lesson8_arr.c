#include <stdio.h>
// arrays time 
static void print_arr (int* arr, size_t n){
    for (size_t i = 0; i < n; ++i){
        printf("a[%zu] = %d\n",i, arr[i]);
    }
    printf("\n");
}
// static int sum_int_array(const int* a, size_t n){
//     for (sie)
// }
int main (void){
    int a[7] = {0, 0, 0, 0, 0, 0,0};
    int b [] = {0,0,0,0,0,0,0};
    int c[7] = {0,0,0};

    printf("Inside c[0] : %d\n", c[0]);
    printf("Inside c[6] : %d\n", c[6]);

    // determine size of array 

    size_t n = sizeof(b) / sizeof(b[0]);

    printf("number of elements in b : %zu\n", n);

    //out of bounds 
    printf("number of elements in a : %zu\n", a[8]);

    //array traversal 
    for (int i = 0; i < n; ++i){
        printf("%d\n", b[i]);
    }
    printf("\n");

    print_arr(b,n);

}