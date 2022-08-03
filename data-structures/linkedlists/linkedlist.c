#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};

void print_LL(struct node* n) {
	while (n != NULL) {
		fprintf(stdout, "%d\n", n->data);
		n = n->next;
	}
}

int main(void) {
	struct node* head = NULL;
        struct node* second = NULL;
	struct node* tail = NULL;
	
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	tail = (struct node*)malloc(sizeof(struct node));

	head->data = 10;
	second->data = 20;
	tail->data = 30;
	
	head->next = second;
	second->next = tail;
	tail->next = NULL;

	print_LL(head);
	
	return 0;
}
