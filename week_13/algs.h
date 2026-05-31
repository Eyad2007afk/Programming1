#ifndef ALGS_H
#define ALGS_H 

#include <stdio.h>
#include <time.h>
#include "bubble.h"
#include <stdlib.h>

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
    void swapp_ints (int *left, int *right){
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
        if (left < n && arr[left] > arr[largest]){
            largest = left;
        }
        if (right < n && arr[right] > arr[largest]){
            largest = right;
        }
        if (largest != i){
            int temp = arr[i];
            arr[i] = arr[largest];
            arr[largest] = temp;

            heapify(arr,n, largest);
        }
    }
    void heapSort(int arr[], int n){
        for (int i = n/ 2 -1; i >= 0; i--){
            heapify(arr, n, i);
        }
        for (int i= n - 1; i > 0; i--){
            int temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;
            heapify(arr, i, 0);
        }
    }


    //QUICK SORT 
    void swap(int* a, int* b);
    int partition(int arr[], int low, int high){
        int pivot = arr[high];
        int i = low -1;
        for (int j = low; j <=high -1 ; j++){
            if (arr[j] < pivot){
                i++;
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[i +1], &arr[high]);
        return i +1;
    }
    void quickSort(int arr[], int low, int high){
        if (low < high){
            int pi = partition(arr,low,high);
            quickSort(arr, low, pi -1);
            quickSort(arr, pi + 1, high);
        }
    }
    void swap(int* a, int* b){
        int t = *a;
        *a = *b;
        *b = t;
    }

    // MERGE SORT 
    void merge (int arr[], int l, int m, int r){
        int i,j,k;
        int n1 = m - l + 1;
        int n2 = r- m;
        int L[n1], R[n2];
        for (i = 0; i < n1; i++){
            L[i] = arr[l + i];
        }
        for (j = 0; j < n2; j++){
            R[j] = arr[m + 1 + j];
        }

        i=0;
        j=0;
        k=l;
        while ( i< n1 && j < n2){
            if (L[i] <= R[j]){
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        while ( i < n1){
            arr[k] = L[i];
            i++;
            k++;
        }
        while (j < n2){
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    void mergeSort(int arr[], int l, int r){
        if (l < r){
           int m = l + (r - l) /2;
            mergeSort(arr,l,m);
            mergeSort(arr,m + 1, r);

            merge(arr,l,m,r);
        }
    }

    //COUNTING SORT 
    void countSort(int arr[], int n){
        int maxval = 0;
        for (int i = 0; i < n; i++){
            if (arr[i] > maxval){
                maxval = arr[i];
            }
        }
        int* cntArr = (int*)calloc(maxval + 1, sizeof(int));
        for (int i = 0; i < n; i++){
            cntArr[arr[i]]++;
        }
        for (int i = 1; i <=maxval; i++){
            cntArr[i] += cntArr[i -1];
        }
        int* ans = (int*)malloc(n * sizeof(int));
        for (int i = n -1; i>=0 ;i--){
            ans[cntArr[arr[i]] -1] = arr[i];
            cntArr[arr[i]]--;
        }
        for (int i = 0; i < n; i++){
            arr[i] = ans[i];
        }
        free(cntArr);
        free(ans);
    }
    #endif