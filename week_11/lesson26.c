#include "Lesson26_bst.h"
#include <stdio.h>
#include <stdlib.h>

struct _BSTNode {
    int key;
    struct _BSTNode *left;
    struct _BSTNode *right ; 
    };

BSTNode *bst_create_node(int key){
    BSTNode *node = malloc(sizeof(struct _BSTNode));
    if (!node){
        return NULL;
    }
    node ->key = key;
    node ->left = NULL;
    node -> right = NULL;
    return node;
}
BSTNode *bst_insert(BSTNode *root, int key){
    if (!root){
        return bst_create_node(key);
    }
    if (key < root -> key){
        root ->left = bst_insert(root -> left, key);
    } else if (key > root -> key){
        root -> right = bst_insert(root -> right, key);
    }
    return root;
}
BSTNode *bst_search(BSTNode *root, int key){
    if (!root){
        return NULL;
    }
    if (key < root -> key){
        return bst_search(root -> left, key);
    } else if (key > root -> key){
        return bst_search(root -> right, key);
    } else {
        return root;
    }
}

BSTNode *bst_remove(BSTNode *root, int key){
    BSTNode *tmp;
    BSTNode *successor;
    if (!root){
        return NULL;
    }
    // TODO: Implement removal logic
    return root;
}