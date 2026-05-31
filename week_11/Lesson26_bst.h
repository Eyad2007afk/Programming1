#ifndef BST_H
#define BST_H

typedef struct _BSTNode BSTNode;

//detached node 
BSTNode *bst_create_node(int key);

BSTNode *bst_insert(BSTNode *root, int key);
BSTNode *bst_search(BSTNode *root, int key);
BSTNode *bst_remove(BSTNode *root, int key);
void bst_free(BSTNode *root);

#endif