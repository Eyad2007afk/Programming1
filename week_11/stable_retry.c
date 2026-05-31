#include <stdio.h>
#include <stdlib.h>
//#include "algs.h"
// #include "bubble.h"
typedef struct stable{
    int value;
    int tag_index;

} stable;
typedef struct SortStats { 
    size_t passes; 
    size_t comparisons;
    size_t swaps;
} SortStats;

int is_sorted ( const int *a, size_t n);
void swap_ints (int *left, int *right);
void bubble_sort ( stable *a, size_t n, SortStats *stats);
void bubble_sort_opt( int *a, size_t n, SortStats *stats);

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
void bubble_sort (stable *a, size_t n, SortStats *stats){
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
                if (a[j].value > a[j+1].value){
                  stable temp = a[j];
                  a[j] = a[j + 1];
                  a[j + 1] = temp;
                    record_swap(stats);
                    }
                }
            }
        }

int main(void){
   stable ray[5] = {{3,0}, {1,1},{1,2},{4,3}, {5,4}};
   bubble_sort(ray, 5, NULL);
   for (int i = 0; i < 5 ; ++i){
    printf("value : %d, tag : %d\n", ray[i].value, ray[i].tag_index);
   }
}