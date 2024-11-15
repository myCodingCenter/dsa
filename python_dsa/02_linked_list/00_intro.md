# Introduction to DSA

learning DSA using python.

- what is a ll
- Node
- create a ll
- len
- insert from head
- traverse/ print
- insernt from tail(append)
- insert in middle(after)

- clear
- delete from head
- delete from tail(pop)
- delete by value(remove)

- search by value(find)
- delete by index -> del L[0]
- search by index(indexing)
- Array vs LL

## Linked List

It is a linear data structure. Collection of nodes. Nodes structure where can be store data and address of upcoming node. First node is called head and last one is call tail.

non-continuous memory location

tail is end with null value

### why not use array

- insertion  
- deletion

### why to use linked list instead of array

- utilizing full memory
- can be create stacks, quess

### when to use what

- ready heavy go for array
- write heavpy got for linked list

### create a node

```python
    class node:
        def __init__(self,value):
            self.data = value
            self.next = None

    a = Node(1)
    b = Node(2)
    c = Node(3)
    # address of a
    id(a)
    print(a.data)
    print(b.data)
    print(c.data)

    a.next = b
    b.next = c
```

### create a lined list

```python
    class linkedList:
        def __init__(self):
            # empty linked list = 0 node; head = none
            self.head = None
            # counting node
            self.n = 0
        def __len(self):
            return self.n
     l = linkedList()
     len(l)
     ## insert 
     #1. head 2. tail(append) 3. middle(insert) 
     #-- traverse
    # print  
    # delete
    # 1. head 2. tail(pop) 3. value(remove) 4. index
    # search
    # 1. value 3. index


    def insert_head(self,value):
        # create a new node
        new_node = node(value)

        # create connection
        new_node.next = self.head

        # reassign
        self.head = new_node


```
