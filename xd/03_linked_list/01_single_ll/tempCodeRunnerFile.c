#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *head=NULL,*new = NULL;

void insert(int data){
    if(head == NULL){
        head = (struct node*)malloc(sizeof(struct node));
        head->data = data;
    }
    else{
        new = (struct node*)malloc(sizeof(struct node));
        new->data = data;
        new->link = NULL;
        head->link = new;
    }
    printf("inserted!\n");
}
int print(struct node *node){
    int i,count=0;
    if(node == NULL){
        printf("Empty Linked List\n");
    }
    struct node *ptr;
    ptr = node;
    while (ptr == NULL)
    {   
        count++;
        ptr = node->link;
    }
    return count;
}


int main(){
    insert(5);
    insert(8);
    insert(3);
    int n = print(head);
    printf("%d\n",n);
    return 0;
}