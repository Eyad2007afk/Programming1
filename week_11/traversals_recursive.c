#include <stdio.h>
#include <stdlib.h>
typedef struct BTnode
{
     int val; 
    struct BTnode *left;
    struct BTnode *right;
}BTnode;
BTnode *bt_create_node (int val, BTnode *left, BTnode *right){
    BTnode *node = malloc(sizeof(struct BTnode));
      if(!node){
        return NULL;
    }
    node -> val = val;
    node -> left = left;
    node -> right = right;
    
    return node;
}
void bt_preorder(BTnode *root, void (*visit)(int, void *), void *ctx){
    if (!root){
        return;
    }
    visit(root -> val, ctx);
    bt_preorder(root -> left, visit, ctx);
    bt_preorder(root -> right, visit, ctx);
}
void bt_inorder (BTnode *root, void(*visit)(int, void *), void *ctx){
    if (!root){
        return;
    }
    bt_inorder(root -> left, visit, ctx);
    visit(root-> val, ctx);
    bt_inorder(root -> right, visit, ctx);
}
void bt_postorder (BTnode *root, void(*visit)(int, void *), void *ctx){
    if (!root){
        return;
    }
    bt_postorder(root -> left, visit, ctx);
    bt_postorder(root -> right, visit, ctx);
    visit(root -> val, ctx);
}
    void print_val(int val, void *ctx){
        printf("%d ", val);
    }
void count_val(int val, void *ctx){
    *(int *)ctx +=1;
}
int main(void){
    int count = 0;
    BTnode *node1 = bt_create_node(1,NULL,NULL);
    BTnode *node2 = bt_create_node(3, NULL,NULL);
    BTnode *node3 = bt_create_node(5, NULL,NULL);
    BTnode *node4 = bt_create_node(7, NULL,NULL);
    BTnode *node5 = bt_create_node(2, node1, node2);
    BTnode *node6 = bt_create_node(6, node3,node4);
    BTnode *root = bt_create_node(4, node5, node6);
    
    printf("in order : ");
    bt_inorder(root, print_val, NULL);
    printf("\n postorder : ");
    bt_postorder(root, print_val, NULL);
    printf("\n preorder : ");
    bt_preorder(root, print_val, NULL);
    printf("\nconfirming the ctx \n");
    bt_inorder(root,count_val, &count);
    printf("\nnode count : %d\n", count);
    }




