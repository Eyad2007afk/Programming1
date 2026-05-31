#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int size;
    int capacity;
} Heap;

int parent (int i){
    return (i -1)/2;
}
int left (int i) {
    return 2 * i  +1;
}
int right (int i){
    return 2 * i + 2;
}
void swap (int *a, int *b){
    int t = *a;
    *a  =*b;
    *b = t;
}
void heapify_up(Heap *h, int i){
    while ( i> 0 && h -> data[parent(i)] < h->data[i]){
        swap(&h -> data[parent(i)], &h->data[i]);
        i = parent(i);
    }
}
void heapify_down (Heap *h, int i){
    int n = h->size;

    while (left(i) < n){
        itn j = left (i);
        if (right(i) < n && h-> data[right(i)] > h->data(j)){
            j = right(i);
        }
        if (h->data[i] >= h->data[j]){
            break;
        }
        swap(&h->data[i], &h->data[j]);
        i=j;
    }
}
void push(Heap *h, int value) {
    // I should be checking the size/capacity

    h->data[h->size] = value;
    heapify_up(h, h->size);
    h->size++;
}

int pop(Heap *h) {
    int root = h->data[0];

    h->data[0] = h->data[h->size - 1];
    h->size--;

    heapify_down(h, 0);

    return root;
}