#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct node *link;
};
typedef struct Node node;
node *head = NULL;
node *getNode(){
    node *newnode = (node *)malloc(sizeof(node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->link = NULL;
    return newnode;
}
node *createlist(int n){
    node *newnode = NULL;
    node *temp = NULL;
    for(int i = 0;i<n;i++){
        newnode = getNode();
        if(head == NULL){
            head = newnode;
        }
        else{
            temp = head;
            while(temp->link != NULL){
                temp = temp->link;
            }
            temp->link = newnode;
        }
    }
}
int main(){
    node *head = createlist(5);   
    return 0;
}