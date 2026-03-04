#include <stdio.h>

static int mimi(int *a, int start, int count,size_t n){
    if (a == NULL) return 0;
    if (start > n) return 0;
    if (count >n- start) return 0;
    for (int i = 0; i< count; i++){
        printf("%d", a[i]);
    }
}
int main (void){
    int a[]= {22,55,67,42,33,11};
    size_t n = sizeof(a) / sizeof(a[0]);

    // mimi(&a[0], 2);
    printf("slicing down lets go : \n");
    mimi(&a[0],1,2,6);
    printf("\nnumber of elements in mimi array :  %zu\n", n);

    return 0;
}