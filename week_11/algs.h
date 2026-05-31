#ifndef ALGS_H
#define ALGS_H 

#include <stdio.h>
#include <time.h>
#include "bubble.h"

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
    void swapp_ints(int *a, int *b) {
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

    //BUBBLE SORT 
    void record_comparison(SortStats *stats){
        if (stats != 0){
            stats -> comparisons +=1 ;
        }
    }
    void record_swap(SortStats *stats){
        if (stats != 0){
            stats -> swaps += 1;
        }
    }
    int is_sorted (const int *a, size_t n){
        if (a==0 || n == 0){
            return 0;
        }
        for (size_t i = 1 ; i < n ; i +=1){
            if (a[i -1] > a[i]){
                return 0;
            }
        }
        return 1;
    }
    void swap_ints (int *left, int *right){
        if (left == 0 || right == 0){
            return;
        }
        int temp = *left;
        *left = *right;
        *right= temp;
    }
    void bubble_sort (int *a, size_t n, SortStats *stats){
        if (stats !=0){
            stats -> passes = 0;
            stats -> comparisons = 0;
            stats -> swaps = 0;
        }
        if (a == 0 || n < 2){
            return;
        }
        for (size_t pass = 0; pass < n - 1 ; pass +=1){
            if (stats != 0){
                stats -> passes +=1;
            }
          
            for (size_t j = 0; j +1 < n - pass ; j+=1){
                record_comparison(stats);
                if (a[j] > a[j+1]){
                    swap_ints(&a[j], &a[j+1]);
                    record_swap(stats);
                    }
                }
            }
        }
        void bubble_sort_optimized(int *a, size_t n, SortStats *stats){
            if (stats != 0 ){
                stats -> passes = 0;
                stats -> comparisons = 0;
                stats -> swaps = 0;
            }
            if (a ==0 || n < 2){
                return;
            }
            for (size_t pass = 0; pass < n -1; pass +=1){
                int swapped= 0;
                if (stats != 0){
                    stats -> passes +=1;
            }
            for (size_t j = 0; j +1 < n- pass; j +=1){
                if (a[j] > a[j +1]){
                    swap_ints(&a[j], &a[j+1]);
                    if (stats != 0){
                        stats -> swaps +=1 ; 
                    }
                    swapped =1;
                }
            }
            if(!swapped){
                return;
            }
        }
    }
    
    //HEAPSORT 
    void heapify (int arr[], int n, int i){
        int largest = i;
        int left = 2 * i +1;
        int right = 2 * i +2;
        if (left < n && arr[r] > arr[largest]){
            largest = r;
        }
        if (largest != i){
            int temp = arr[];
            arr[i] = arr[largest];
            arr[largest] = int temp;

            heapify(arr,n, largest);
        }
    }
    void heapSort(int arr[], int n){
        for (int i = n/ 2 -1l; i >= 0; i--){
            heapify(arr, n, i);
        }
        for (int = n - 1; i > 0; i--){
            int temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;
            heapify(arr, i, 0);
        }
    }

    #endif