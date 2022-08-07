// Singly Linked List w/o Global Variables

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node* search_LL(struct node* n, int sdata) {
	while(n->data != sdata) {
		n = n->next;
		if (n == NULL)
			return NULL;
	}
	return n;
}

void print_LL(struct node* n) {
	while (n != NULL) {
		fprintf(stdout, "%d\n", n->data);
		n = n->next;
	}
}

void insert_LL(struct node** head_ref, int data) {
	struct node* new_n = malloc(sizeof(new_n));
	new_n->data = data;
	new_n->next = *head_ref;
	*head_ref = new_n;
}

void delete_LL(struct node* head_ref, int data) {
	struct node* new_n = malloc(sizeof(new_n));
	struct node* prev = malloc(sizeof(prev));
	new_n = head_ref->next;
	if (new_n->data == data) {
		head_ref = new_n->next;
		return;
	}
	while (new_n->next != NULL) {
		prev = new_n;
		new_n = new_n->next;
		if (new_n->data == data) {
			prev->next = new_n->next;
			return;
		}
	}	
}	

int main(void) {
	struct node* head = NULL;
        struct node* second = NULL;
	struct node* tail = NULL;
	
	//head = (struct node*)malloc(sizeof(struct node));
	head = malloc(sizeof(head)); // better way for malloc
	second = (struct node*)malloc(sizeof(struct node));
	tail = (struct node*)malloc(sizeof(struct node));

	head->data = 10;
	second->data = 20;
	tail->data = 30;
	
	head->next = second;
	second->next = tail;
	tail->next = NULL;

	// print demo
	print_LL(head);
 	printf("\n");	

	// search demo
	struct node *nd = NULL;	
 	nd = malloc(sizeof(nd));
	nd = search_LL(head, 20);
	fprintf(stdout, "%d\n", nd->data);	
 	printf("\n");	

	// insert demo
	insert_LL(&head, 80);
	print_LL(head);
 	printf("\n");	

	// delete demo
	delete_LL(head, 20);
	print_LL(head);
 	printf("\n");	

	free(head);
	free(second);
	free(tail);
	
	return 0;
}
