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
        while (self.head is not None):
            print(self.head.data)
            self.head = self.head.next

    def addBegin(self, data=none):
        n = node(data)
        n.next = self.head
        self.head = n

list = ll()
list.head = node
