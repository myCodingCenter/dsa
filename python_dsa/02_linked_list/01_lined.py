# creating node 

class node:
    def __init__(self,value):
        self.data = value
        self.next  = None

class linkedList:
    def __init__(self):
        self.head = None
        self.n = 0
    def __len__(self):
        return self.n
    def insert_head(self,value):
        new_node = node(value)
list = linkedList()
print(len(list))