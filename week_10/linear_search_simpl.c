#include <stdio.h>

int linear_search(const int *a, size_t n, int target){
    if (!a || n == 0 ) return -1;
    for(size_t i = 0; i < n; i++){
        if (a[i] == target) return (int) i ;
    }
    return -1;
}
int main (void){
    int sizes[11] = {1,55,23,4,8,67,200,11,9,0,5};
    int result = linear_search(sizes,11, 55);
    printf("searching through this algorithm : %d\n", result);
    return 0;
    //CHECK THE TIME TAKEN FOR EXTRA KNOWLEDGE 
}