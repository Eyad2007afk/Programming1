#ifndef ALGS_H
#define ALGS_H 

#include <stdio.h>
#include <time.h>

//TIMING LOGIC 
void test(int n) {
    int sum = 0;
    for  (int i = 0; i < n; i++) {
        sum += i;
      
    }
}

//SEARCH ALGORITHMS 

    //LINEAR SEARCH 
    int linear_search(const int *a, size_t n, int target){
    if (!a || n == 0 ) return -1;
    for(size_t i = 0; i < n; i++){
        if (a[i] == target) return (int) i ;
    }
    return -1;
}

    //BINARY SEARCH 
    int binary_search(const int *a, size_t n, int target){
        if (!a || n == 0) return -1;
        size_t lo = 0, hi = n;
        while (lo < hi){
            size_t mid = lo + (hi - lo) / 2;
            int v = a[mid];
            if (v < target){
                lo = mid +1;
            } else {
                hi = mid;
            }
        }
        if (lo < n && a[lo] == target) return (int) lo;
        return -1;
    }


//ELEMENTARY SORTS I 

    //SELECTION SORT 
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

    //INSERTION SORT 
    void insertion_sort(int *a, size_t n){
        if (!a || n < 2) return;
        for (size_t i = 1; i < n ; ++i){
            int target = a[i];
            size_t j = i;
            while (j > 0 && a[j - 1] > target){
                a[j] = a[j-1];
                --j;
            }
            a[j] = target;
        }
    }

        //TO USE QSORT 
        // build a comp function that compares two void pointers
        // and then return cast them as int 

    #endif