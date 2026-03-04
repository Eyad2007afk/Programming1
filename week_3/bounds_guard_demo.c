#include <stdio.h>

// static void int print_slice(const int *a, size_t n, size_t start, size_t count){
//     if (a == NULL ) return 0;
//     if (start > n ) return 0;

// }

static void slicer(int *a, int len){
    for (int i =0; i < len; i++){
        printf("%d", a[i]);
    }
}

int main(void){
        int a[]={1,2,3,4,5,6,7};

        slicer(&a[1],6);
        return 0;
    }