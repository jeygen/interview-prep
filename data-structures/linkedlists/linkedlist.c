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

	print_LL(head);

	struct node *n = NULL;	
 	n = malloc(sizeof(n));
	n->next = head;
	n = search_LL(n, 20);
	fprintf(stdout, "%d", n->data);	

	return 0;
}
