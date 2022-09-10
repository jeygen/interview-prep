#include <stdio.h>
#include <stdlib.h>

struct t_node {
    int data;
    struct t_node *left;
    struct t_node *right;
};

struct t_node *create_node(int data) {
    struct t_node *new_node = malloc(sizeof(struct t_node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void print_tree(struct t_node *root) {
    if (root == NULL) return;
    print_tree(root->left);
    printf("%d ", root->data);
    print_tree(root->right);
}

int main(void) {
    struct t_node *root = create_node(1);
    root->left = create_node(2);
    root->right = create_node(3);
    root->left->left = create_node(4);
    root->left->right = create_node(5);
    print_tree(root);
    return 0;
}