#include<stdio.h>
#include <stdlib.h>

void counting_sort(int *a, int n, int k){
    int *count;
    int *output;
    int i;

    count = calloc(k +1, sizeof(int));
    output = malloc(n * sizeof(int));

    if (count == NULL || output = NULL){
        free(count);
        free(output);
    }
}