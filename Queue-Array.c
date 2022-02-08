#include <stdio.h>
#include <stdlib.h>
void main() {
    int l=0,opr=0,e=0;
    printf("enter the limit\n");
    scanf("%d", &l);
    int queue[l],front=-1,rear=-1;
    while(1){

    printf("\n------------------------MENU------------------------\n");
    printf("1 . Insertion(push)\n");
    printf("2 . Deletion(pop\n");
    printf("3 . Display(pop)\n");
    printf("4 .Exit\n");
    printf("Enter the option\n");
    scanf("%d", &opr);

    switch(opr) {

        case 1: if(rear>=l-1){
                    printf("Insertion is not possible\n");
            }
            else{
                printf("Enter the element to be inserted\n");
                scanf("%d", &e);
                rear+=1;
                queue[rear]=e;
                for (int i=0; i <=rear; i++)
                {
                    printf("%d\t",queue[i]);
                }
            
            }
            break;

        case 2: if(rear<=front){
                    printf("Deletion is not possible\n");
                }
                else{
                    for (int i=0; i<rear; i++){
                        queue[i]=queue[i+1];
                    }
                    rear-=1;
                    for (int i=0; i <=rear; i++)
                {
                    printf("%d\t",queue[i]);
                }

                }
                break;
        case 3: if(rear!=front){
                    for (int i=0; i <=rear; i++)
                    {
                        printf("%d\t",queue[i]);
                    }
                }
                break;
        case 4: exit(0);
        default: printf("Wrong input\n");
                break;
    }
}
}