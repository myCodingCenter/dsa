
// Singly ll strcture
struct node
{
    int data;
    struct node* link; // to store the address of next node
};

// Doubly ll
struct Node{
    int data;
    struct node* next;
    struct node* prev;
};
// Circular linked list 
// it is singly linked list, where link of end node is pointing head node
// Circular linked list 
// it is singly linked list, where head node is pointing end node and end node pointing head node;