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
#include <stdbool.h>
#define SIZE 5

struct node {
    int data;
    struct node * left;
    struct node * right;
};

void inorder(struct node*);
bool bstcheck();
struct node * createNode(int);

int a[SIZE];

bool bstcheck() {
    for (int i = 0; i < SIZE - 1; i++) {
        if (a[i] > a[i + 1]) {
            return false;
        }
    }
    return true;
}

void inorder(struct node *root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    static int i = 0;
    a[i] = root->data;
    i++;
    inorder(root->right);
}

struct node * newNode(int data) {
    struct node *x = (struct node *)malloc(sizeof(struct node));
    x->data = data;
    x->left = NULL;
    x->right = NULL;
    return x;
}
 
int main() {
    struct node * root = newNode(10);
    root->left = newNode(19);
    root->right = newNode(11);
    root->left->left = newNode(13);
    root->left->right = newNode(21);
   // root = newNode(10);
    inorder(root);
    printf("\n%d", bstcheck());
    return 0;
}







