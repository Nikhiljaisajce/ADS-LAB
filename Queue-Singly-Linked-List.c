#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;
void dequeue();
void enqueue();
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

void enqueue(){

    struct node *temp, *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the element\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(front==NULL&&rear==NULL){
        front=newnode;
        rear=newnode;
    }
    else{
        temp=front;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        rear=newnode;
    }
    temp=front;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }

}

//deletion at the end
void dequeue(){
    struct node *temp=front;
    if(front->next==NULL){
        front=NULL;
        rear=front;
    }
    if(front==NULL&rear==NULL){
        printf("Queue is empty Deletion is not Possible\n");
        return 0;
    }
    else{
        front=temp->next;
    }
    temp=front;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }

}




void traversal(){
    struct node *temp;
    temp=front;
    if(front==NULL){
        printf("\nNO Element Found\n");

    }
    else{
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }

}
