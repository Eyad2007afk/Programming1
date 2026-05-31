#include <stdio.h>
#include "algs.h"
#include <stddef.h>
#include <stdlib.h>

int main (void){
    printf("DEBUG: Program started\n");
    fflush(stdout);
    
    int ray1[10000], ray2[10000], ray3[10000], ray4[10000], ray5[10000], ray6[10000];
    
    printf("DEBUG: Arrays declared\n");
    fflush(stdout);
    
    // Fill ray1
    for (int a = 0; a < 10000; a++){
        ray1[a]= rand() % 100000;
    }

    printf("sorting with selection sort\n");
    fflush(stdout);
    clock_t start = clock();
    selection_sort(ray1, 10000);
    clock_t end = clock();
     double time_taken = (double) (end - start) / CLOCKS_PER_SEC;
    printf("time to sort : %f\n", time_taken);

    // Fill ray2
    for (int a = 0; a < 10000; a++){
        ray2[a]= rand() % 100000;
    }

    printf("sorting with insertion sort\n");
    fflush(stdout);
    clock_t start1 = clock();
    insertion_sort(ray2, 10000);
    clock_t end1 = clock();
         double time_taken1 = (double) (end1 - start1) / CLOCKS_PER_SEC;
    printf("time to sort : %f\n", time_taken1);

    // Fill ray3
    for (int a = 0; a < 10000; a++){
        ray3[a]= rand() % 100000;
    }

    printf("sorting with bubble sort\n");
    fflush(stdout);
    clock_t start2 = clock();
    SortStats stats = {0};
    bubble_sort(ray3, 10000, &stats);
    clock_t end2 = clock();
         double time_taken2 = (double) (end2 - start2) / CLOCKS_PER_SEC;
    printf("time to sort : %f\n", time_taken2);

    // Fill ray4
    for (int a = 0; a < 10000; a++){
        ray4[a]= rand() % 100000;
    }

    printf("sorting with heapsort sort\n");
    fflush(stdout);
    clock_t start3 = clock();
    heapSort(ray4, 10000);
    clock_t end3 = clock();
         double time_taken3 = (double) (end3 - start3) / CLOCKS_PER_SEC;
    printf("time to sort : %f\n", time_taken3);

    // Fill ray5
    for (int a = 0; a < 10000; a++){
        ray5[a]= rand() % 100000;
    }

    printf("sorting with mergesort sort\n");
    fflush(stdout);
    clock_t start4 = clock();
    mergeSort(ray5, 0, 9999);
    clock_t end4 = clock();
         double time_taken4 = (double) (end4 - start4) / CLOCKS_PER_SEC;
    printf("time to sort : %f\n", time_taken4);

    // Fill ray6
    for (int a = 0; a < 10000; a++){
        ray6[a]= rand() % 100000;
    }

    printf("sorting with quicksort sort\n");
    fflush(stdout);
    clock_t start5 = clock();
    quickSort(ray6,0,9999);
    clock_t end5 = clock();
         double time_taken5 = (double) (end5 - start5) / CLOCKS_PER_SEC;
    printf("time to sort : %f\n", time_taken5);

    // Fill one more for counting sort (if needed as a 7th)
    int ray7[10000];
    for (int a = 0; a < 10000; a++){
        ray7[a]= rand() % 100000;
    }

    printf("sorting with counting sort\n");
    fflush(stdout);
    clock_t start6 = clock();
    countSort(ray7,10000);
    clock_t end6 = clock();
         double time_taken6 = (double) (end6 - start6) / CLOCKS_PER_SEC;
    printf("time to sort : %f\n", time_taken6);

    return 0;

}