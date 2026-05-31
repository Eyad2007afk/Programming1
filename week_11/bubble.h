#ifndef BUBBLE_H
#define BUBBLE_H

#include <stddef.h>

typedef struct SortStats { 
    size_t passes; 
    size_t comparisons;
    size_t swaps;
} SortStats;

int is_sorted ( const int *a, size_t n);
void swap_ints (int *left, int *right);
void bubble_sort ( int *a, size_t n, SortStats *stats);
void bubble_sort_opt( int *a, size_t n, SortStats *stats);

#endif