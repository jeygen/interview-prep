/*
Q:
Implement a function to check if a binary tree is balanced.
Assume bal tree has sub-tree heights within one.
*/


/* 
- inorder traversal
- if output is least to greatest then balanced
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * left;
    struct node * right;
};


void inorder_traversal(struct node *root) {
    if (root == NULL) return;
    inorder_traversal(root->left);
    printf("%d", *root);
    inorder_traversal(root->right);
}

struct node * newNode(int data) {
    struct node * x;
    x->data = data;
    x->left = NULL;
    x->right = NULL;
    return x;
}
 
int main() {
    struct node * root = (struct node *)malloc(sizeof(struct node));
    root = newNode(10);
    inorder_traversal(root);
}






