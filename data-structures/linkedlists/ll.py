'''
linked list

node()
    data
    point to next node

insert()
    new node n
    data
    point to what head points to
    new head is n

delete()
    cycle thru node next until null
    iuf data matches stop
    make prev point to current next
'''

class node:
    def __init__(self, data=None):
        self.data = data
        self.next = None
    
class ll:
    def __init__(self):
        self.head = None

    def printLL(self):
        temp = self.head
        while (temp is not None):
            print(temp.data)
            temp = temp.next

    def addBegin(self, data):
        n = node(data)
        n.next = self.head
        self.head = n
    
    def deleteLL(self, data=None):
        # Store head node
        temp = self.head
 
        # If head node itself holds the key to be deleted
        if (temp is not None):
            if (temp.data == data):
                self.head = temp.next
                temp = None
                return
 
        # Search for the key to be deleted, keep track of the
        # previous node as we need to change 'prev.next'
        while(temp is not None):
            if temp.data == data:
                break
            prev = temp
            temp = temp.next
 
        # if key was not present in linked list
        if(temp == None):
            return
 
        # Unlink the node from linked list
        prev.next = temp.next
 
        temp = None

list = ll()
list.head = node(0)
for i in range(1,6):
    list.addBegin(i)
list.printLL()
#print('=======')
list.printLL()
list.deleteLL(3)
list.printLL()


