# Linked Lists

pseudo code for LL  
dir contains variations of LL's in different languages  

- struct node
	- data
	- struct node *next

- printLL(n)
	- while (n != NULL)
		- print(data)
		- n = node.next	

- *node searchLL(n, data)
	- while (n.data != data)
		- n = node.next	
		- if n == NULL
			- return NULL	
	- return n
	
- insertLL(head)
	- new node
	- node.next -> head
	- head = node

- deleteLL(data)
	- if head = null return
	- u = node ref by head 
	- if u.data == data
		- head = u->next
		- return
	- while u->next != null
		- prev = u
		- u = u->next
		- if u->data == data
			- prev->next = u->next
			- return
		
