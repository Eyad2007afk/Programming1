#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include "traversals_recursive.c"

#define CAP 16

typedef struct queue{
    int *items;
    int front;
    int back;

}queue;

void queue_init(queue *q){
    q -> front = 0;
    q -> back = 0;
}

bool is_empty(queue *q){
    return (q -> front == q->back -1 );
}
bool is_full(queue *q){
    return (q-> back == MAX_SIZE);
}
void enqueue(queue *q, int value){
    if (is_full(q)){
        printf("fullll bruh get out\n");
        return;
    }
    q -> items[q -> back] = value;
    q->back++ ;
}
void dequeue(queue *q){
    if (is_empty(q)){
        printf("yea we got space right through here bruh\n");
        return;
    }
    q ->front++;

}

