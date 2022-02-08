// import required libraries
#include<stdio.h>
#include<stdlib.h>
// structure definitions
struct node
{
    int data;
    struct node *next;
};
struct node *temp=NULL, *head=NULL, *newnode=NULL;

// function declarations
void insertion_big();
void insertion_data();
void insertion_end();
void delete_big();
void delete_data();
void delete_end();
void traversal();
void search_pos();
void search_data();

// main function

void main(){
int a,b,c;
// menu driven
while(1){
menu:  //back to previous menu
printf("\n----------------LINKED LIST MENU----------------------\n");
printf("1. Traversal/Display\n");
printf("2. Insertion\n");
printf("3. Deletion\n");
printf("4. searching\n");
printf("0. Exit\n");
printf("enter the operation do you to perform\n");
scanf("%d",&a);
switch(a){

    case 1: traversal();   //traversal
            break;
    case 2: while(1){

            printf(" \n--------------------INSERTION MENU-------------------\n");// insertion
            printf("1. Traversal \n");
            printf("2. Insertion at the beginning\n");
            printf("3. Insertion at the end\n");
            printf("4. Insertion after a particular element\n");
            printf("9. previous \n");
            printf("0. exit\n");
            printf("enter the operation do you to perform\n");
            scanf("%d",&b);
            switch(b){
                case 1: traversal();
                        break;
                case 2: insertion_big();
                        break;
                case 3: insertion_end();
                        break;
                case 4: insertion_data();
                        break;
                case 9: goto menu;
                case 0: exit(1);
                default: printf("invalid option\n");
                        break;
            }
    } 
            break;
    case 3: while(1){
            printf(" \n--------------------DELETION MENU-------------------\n"); //deletion
            printf("1. Traversal \n");
            printf("2. Deletion at the beginning\n");
            printf("3. Deletion at the end\n");
            printf("4. Deletion of a specific element\n");
            printf("9. previous \n");
            printf("0. exit\n");
            printf("enter the operation do you to perform\n");
            scanf("%d",&c);
            switch(c){
                case 1: traversal();
                        break;
                case 2: delete_big();
                        break;
                case 3: delete_end();
                        break;
                case 4: delete_data();
                        break;
                case 9: goto menu;
                case 0: exit(1);
                default: printf("invalid option\n");
                        break;
            }
    }
            break;
    case 4: while(1){
                printf("\n --------------------SEARCHING MENU-------------------\n");  //searching
            printf("1. Traversal \n");
            printf("2. searching with postion\n");
            printf("3. searching with data\n");
            printf("9. previous \n");
            printf("0. exit \n");
            printf("enter the operation do you to perform\n");
            scanf("%d",&c);
            switch(c){
                case 1: traversal();
                        break;
                case 2: search_pos();
                        break;
                case 3: search_data();
                        break;
                case 9: goto menu;
                case 0: exit(1);
                default: printf("invalid option\n");
                        break;
            }
    }
            break;
    case 0: exit(1);
    default:printf("Invalid option\n");
            break;
}
}
}

// searching with position
void search_pos(){
    int pos,i=1,flag=0;
    struct node *temp=NULL;
    temp=head;
    printf("enter the position\n");
    scanf("%d",&pos);
    while(temp!=NULL){
        if(i==pos){
            flag=1;
            printf("%d\n",temp->data);
            break;
        }
        temp=temp->next;
        i++;
    }
    if(!flag){
        printf("Element not found\n");
    }
}

// searching with data
void search_data(){
    int data,i=0,flag=0;
    struct node *temp=NULL;
    temp=head;
    printf("enter the data\n");
    scanf("%d",&data);
    while(temp!=NULL){
        if(temp->data==data){
            flag=1;
            printf("%d\n",temp->data);
            printf("found in %d position\n",i+1);
            break;
        }
        temp=temp->next;
        i++;
    }
    if(!flag){
        printf("not found\n");
    }
}


// traversal
void traversal(){
    struct node *temp;
    temp=head;
    if(head==NULL){
        printf("\nNO Element Found\n");

    }
    
    else{
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }

}

// insertion at the beginning
void insertion_big(){
    newnode=(struct node *)malloc(sizeof(struct node*));
    printf("enter the value to be insert");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    if(head==NULL){
        head=temp=newnode;

    }else{
        newnode->next=head;
        head=newnode;

    }
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;

}

}

// insertion at the end
void insertion_end(){
    struct node *temp;
    newnode=(struct node *)malloc(sizeof(struct node*));
    printf("enter the value to be insert\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;

}

}

// insertion at the specified position
void insertion_data(){
    struct node *temp;
    int val;
    printf("the element added infront of :\n");
    scanf("%d",&val);
    newnode=(struct node *)malloc(sizeof(struct node*));
    printf("enter the value to be insert");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->data!=val){
        temp=temp->next;
    }
    if(temp->next==NULL){
        temp->next=newnode;
    }
    else if(temp->next!=NULL)
    {
        newnode->next=temp->next;
        temp->next=newnode;
    }
    else{printf("element not found\n");return 0;}
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;

}

}

//delete at the beginning
void delete_big(){
    struct node *temp;
    if(head==NULL){
        printf("Deletion is not possible.\n");
        printf("List is empty");
    }
    else{

        head=head->next;
    }
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;

}

}

// delete at the end
void delete_end(){

    struct node *temp=head;
    if(head==NULL){
        printf("Deletion is not possible.\n");
        printf("List is empty");
        return 0;
    }
    if(head->next==NULL){
        head=NULL;
    }
    else{
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
    }
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;

}

}

// delete at the specified position
void delete_data(){
    int val;
    struct node *temp=head,*new;
    printf("enter the value to delete\n");
    scanf("%d",&val);
    if(head==NULL){
        printf("Deletion is not allowed\n");
    }
    if(head->data==val){
        head=head->next;
    }
    else{
        temp=head;
        while(temp->next->data!=val){
            temp=temp->next;
        }
        new=temp->next;
        temp->next=new->next;
        free(new);


    }
    temp=head;
    while(temp!=NULL){
    printf("%d\t",temp->data);
    temp=temp->next;

}
}

