#include <stdio.h>
#include "lists1.h"
#include<stdlib.h>

typedef struct node_s{
    int data;
    struct node_s *next;
}node_t;

typedef struct list_s{
    node *head;
    size_t size;

}lists_t;
