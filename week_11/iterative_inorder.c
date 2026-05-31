#include <stdio.h>
#include <stddef.h>

BSTNode *bst_search(BSTNode *root, int key){
    while (root != NULL){
        if (key < root ->key){
            root = root -> left;
        } else if (key > root->key){
            root= root -> right;
        } else {
            return root;
        }
    }
        return NULL;

}