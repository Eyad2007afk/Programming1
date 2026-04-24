#include <stdio.h>

void swap_ints(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort (int *a, size_t n ){
    if (!a || n < 2) return;
    for (size_t i = 0; i < n; i++){
        size_t min_i = i;
        for (size_t j = i+ 1; j < n; ++j){
            if (a[j] < a[min_i]) min_i = j;
        } 
        if (min_i != i ) swap_ints(&a[i], &a[min_i]);
    }
}

int main(void){
    int sizes [10] = {55,2,680,444,11,39,9,0,4,45};
    selection_sort(sizes, 10);
    printf("Sorted array: ");
    for (size_t i = 0; i < 10; i++) {
        printf("%d ", sizes[i]);
    }
    printf("\n");
    return 0;
}