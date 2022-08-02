Implementing a stack in python, java, js, and c.

Different implementations will take different approaches. 

Last in first out. 

Account for stack-over/underflow.

- push() - add object to top of stack
- pop() - remove object from top of stack
- isEmpty() - check if stack is empty
- top() - returns top object, but does not remove from stack. Error if stack is empty.

global scope top = 0
global scope array or linked list

push(element, array)
    if (top + 1) >= array.length
        error "stack overflow"
    top++
    array[top] = element

pop()
    if isEmpty() == true
        error "Underflow"
    else
        top--
        return (top + 1)

isEmpty()
    if top == 0
        return true
    else
        return false    

top()
    if isEmpty() == true
        error "Underflow"
    return array[top]
    
