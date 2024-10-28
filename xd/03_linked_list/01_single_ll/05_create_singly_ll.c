#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *link;
};
typedef struct Node node;
node *head = NULL;

node *getNode(int i){
    node *newnode = (node*)malloc(sizeof(node));
    printf("Enter Data for Node %d: ",i+1);
    scanf("%d",&newnode->data);
    newnode->link = NULL;
    return newnode;
}
node *createNode(int n){
    node *newnode = NULL;
    node *temp = NULL;
    int i;
    for(i=0;i<n;i++){
        newnode = getNode(i);
        if(head == NULL){
            head = newnode;
        }else{
            temp = head;
            while(temp->link != NULL){
                temp = temp->link;
            }
            temp->link = newnode;
        }
    }
    return head;
}
void print(node *head){
    int count = 0;
    node *temp = head;
    while(temp != NULL){
        count++;
        printf("Node %d data = %d\n",count,temp->data);
        temp = temp->link;
    }
}
int main(){
    node *Head = createNode(5);
    print(Head);
    return 0;
}