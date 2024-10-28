#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}node;
node* create(int);
void print(node *);
int main(){
    node* HEAD = NULL;
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    HEAD = create(n);
    print(HEAD);
    return 0;
}
node* create(int n){
    node *head = NULL;
    node *temp = NULL;
    node *p = NULL;
for(int i=0;i<n;i++){
    temp = (node*)malloc(sizeof(node));
    printf("Enter data for node%d : ",i+1);
    scanf("%d",&(temp->data));
    temp->link = NULL;
    if(head == NULL){
        head = temp;
    }else{
        p = head;
        while (p->link != NULL){
            p = p->link;
            p->link = temp;
        }        
    }
}
}
void print(node *head){
    int count = 0;
    node *p = NULL;       
    p = head;
    while (p != NULL){
    count++;
    printf("%d--->",p->data);
    p = p->link;
    }
    printf("\n");
    printf("Size of node is %d\n",count);
}