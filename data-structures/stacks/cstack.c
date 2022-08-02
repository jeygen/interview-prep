#include <stdio.h>
#define SIZE 6

static int top = -1;
static int stack[SIZE];

void push(int element);
int pop();
int isEmpty();
int stack_top();

int main(int argc, char **argv) {
    int i = 0;
    
    stack_top();
    pop();

    for (i=0; i<SIZE; i++) {
        push(i);
        fprintf(stdout, "%d ", stack_top());
    }
    
    fprintf(stdout, "\n%d", pop());
    push(3);
    push(8);
    push(3);

    return 0;
}

void push(int element) {
    if ((top + 1) > SIZE) {
        fprintf(stderr, "\nStack Overflow\n");
    }
    else {
        top++;
        stack[top] = element;
    }
}

int pop() {
    if (isEmpty() == 1) {
        fprintf(stderr, "\nStack underflow\n");
    }
    else {
        top--;
        return stack[top];
    }
}

int isEmpty() {
    if (top < 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int stack_top() {
    if (isEmpty() == 1) {
        fprintf(stderr, "\nStack empty\n");
    }
    else {
        return stack[top];
    }
}

