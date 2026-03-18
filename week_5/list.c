#include "list.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

struct node {
    int payload;
    struct node* next;
};
struct list {
    struct node* next;
};
list_t* list_create(void){
    list_t *new_list = (list_t*)malloc(sizeof(list_t));
    if (new_list == NULL){
        perror("create_list : memory allocation failed");
        exit(EXIT_FAILURE);
    }
    new_list->head = NULL;
    new_list->size = 0;
    return new_list;
}
void list_destroy(list_t *list){
    //to do 
    if (list == NULL){
    return;
    }
}
size_t list_size(const list_t* list){
    return list -> size ; 
}
void push_front(int element, list_t *list){
    node_t *new_node = malloc(sizeof(node_t));
    if (new_node == NULL ){
        perror("Erorr! Memory allocation failed, aborting");
        return;
    }
    if (list == NULL ){
        perror("Error! Malloc failed, aborting");
        return;
    }
    new_node ->payload = element;
    new_node 0>next = list -> head;
    list -> head = new_node;
    list -> size +=1; 
}
struct node* pop_front(){
    if (list == NULL){
        perror("Error, malloc failed, aborting");
        return NULL;
    }
    int result - list ->head -> payload;
    node_t *todelete - list -> head;

    list->head - list -> head -> payload;
    free(todelete);
    return result;
    
}
int peek(){

}