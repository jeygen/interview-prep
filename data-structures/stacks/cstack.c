#include <stdio.h>
#define SIZE 5

static int top = 0;
static int stack[SIZE];

void push(int element) {
    if ((top + 1) >= SIZE) {
        fprintf(stderr, "Stack Overflow");
    }
    else {
        top++;
        stack[top] = element;
    }
}

int pop() {
    if (isEmpty()) {
        fprintf(stderr, "Stack underflow");
    }
    else {
        top--;
        return stack[top];
    }
}

int isEmpty() {
    if (top == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int stack_top() {
    if (isEmpty()) {
        fprintf(stderr, "Stack empty");
    }
    else {
        return stack[top];
    }
}

int main(int argc, char **argv) {
    int i = 0;

    for (i=0; i<SIZE; i++) {
        push(i);
        fprintf(stdout, "%d ", stack_top());
    }

    return 0;
}


