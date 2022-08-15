# Queues

This pseudocode doesn't inlude under/overflow.

- enqueue(Q,x)
    - Q[Q.tail] = x
    - if Q.tail == Q.length then
        - Q.tail = 1
    - else
        - Q.tail = Q.tail + 1

- dequeue(Q)
    - x = Q[Q.head]
    - if Q.head == Q.length then
        - Q.head = 1
    - else
        - Q.head = Q.head + 1            