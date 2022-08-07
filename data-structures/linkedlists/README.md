# Linked Lists

Pseudo code for LLs. 
Dir contains variations of LL's in different languages.

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
	
- insertLL  
	- new node  
	- node.next -> head  
	- node = head  
