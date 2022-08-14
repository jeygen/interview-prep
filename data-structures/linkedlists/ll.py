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
        if (self.head is not None):
            if (self.head.data == data):
                self.head = self.head.next
                self.head = None
                return
        while (self.head is not None):
            if self.head.data == data:
                break
            prev = self.head
            self.head = self.head.next

        if (self.head == None):
            return

        prev.next = self.head.next
        self.head = None

list = ll()
list.head = node(0)
for i in range(1,6):
    list.addBegin(i)
list.printLL()
#print('=======')
list.printLL()
list.deleteLL(3)
list.printLL()


