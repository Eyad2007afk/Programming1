#include <stdio.h>
#include <stdlib.h>

typedef struct node { 
    int value;
    struct node* next;
    struct node* previous;


}node_t;

//handle 
typedef struct head{
    int size;
    struct node_t* head;

}head_t; 
//sentinel always initialized 
//will always be the first 'node' in the linked list 
head_t* createDoubleLinkedList(){
    head_t* head = (head_t*) malloc(sizeof(head_t));
    head -> size = 0;

    node_t* sentinel = (head_t*)malloc(sizeof(node_t));

    sentinel -> prev = sentinel; 
    sentinel -> next = sentinel;

    return head;



}
void insert_after(head_t* list, node_t* pos, int value){
    //reserve memory for new node 
    node_t* new_node = malloc(sizeof(node_t));
    if (!new_node){
        perror("Malloc failed!");
        exit(EXIT_FAILURE);
    }
    new_node ->value = value;
    new_node -> next = pos->next;
    new_node -> prev = pos;
    pos -> next -> = new_node;
    pos -> next = new_node;
    
    list -> size +=1;

}

