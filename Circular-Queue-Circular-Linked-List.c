#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *temp=NULL, *head=NULL, *newnode=NULL;

void enqueue();
void dequeue();
void traversal();


void main(){

int a,b;
while(1){
        printf("\n---------------Queue Menu------------\n");
        printf("1. Insertion\n 2. Deletion\n 3. Traversal\n 0. exit\n enter the option\n ");
        scanf("%d",&b);
        switch(b){
        case 1: enqueue();
                break;
        case 2: dequeue();
                break;
        case 3: traversal();
                break;
        case 4: exit(1);
        default: printf("invalid option\n");
                break;

        }
}

}

void traversal(){
    struct node *temp;
    temp=head;
    if(head==NULL){
        printf("\nNO Element Found\n");
    }
    else{
        do{
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        while(temp!=head);

    }
}


void enqueue(){
    struct node *temp2,*temp;
    newnode=(struct node *)malloc(sizeof(struct node*));
    printf("enter the value to be insert");
    scanf("%d",&newnode->data);


    if(head==NULL){
        head=temp=newnode;
        newnode->next=head;

    }
    else{
        temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
        head=newnode;
    }
    traversal();


}

void dequeue(){
    struct node *temp=head;
    if(head==NULL){
        printf("Deletion is not possible.\n");
        printf("List is empty");
        return 0;
    }
    if(head->next==head){
        head=NULL;
    }
    else{
        while(temp->next->next!=head){
            temp=temp->next;
        }
        temp->next=head;
    }
    traversal();

}