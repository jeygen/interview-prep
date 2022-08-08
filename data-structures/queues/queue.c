#include <stdio.h>
#include <stdlib.h>

#define CAPACITY 5

static unsigned int head = 0;
static unsigned int tail = CAPACITY - 1; 
static unsigned int q[CAPACITY];

void enqueue(int data);
int dequeue();
void print_q();

int main(void) {
    int i;
    for (i=0; i<CAPACITY; i++)
        enqueue(i);
    print_q();
    dequeue();
    print_q();    
    
    return 0;
}

void enqueue(int data) {
    q[tail] = data;
    tail = (tail + 1) % CAPACITY;
}
    
int dequeue() {
    int data = q[head];
    head = (head + 1) % CAPACITY;
    return data;
}

void print_q() {
    int i;
    for (i = 0; i < CAPACITY; i++) {
       printf("%d\n", q[i]);
    }
}
