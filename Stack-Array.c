#include <stdio.h>
#include <stdlib.h>
void main() {
    int l=0,opr=0,e=0;
    printf("enter the limit\n");
    scanf("%d", &l);
    int stack[100],top=-1;
    while(1){

        printf("\n------------------------MENU------------------------\n");
        printf("1 . Insertion(push)\n");
        printf("2 . Deletion(pop\n");
        printf("3 . Display(pop)\n");
        printf("4 .Exit\n");
        printf("Enter the option\n");
        scanf("%d", &opr);

        switch(opr){
            case 1: if(top>=l-1){
                        printf("Insertion Is not Possible(OVERFLOW)\n");
                    }
                    else{
                        printf("enter the element to be inserted\n");
                        scanf("%d", &e);
                        top+=1;
                        stack[top]=e;
                        printf("elements are\n");
                        for(int j=0;j<=top;j++){
                            printf("%d\t",stack[j]);
                        }

                    }
                    break;

            case 2: if(top<=-1){
                        printf("Deletion Is not Possible(UNDERFLOW)\n");
                    }
                    else{
                        top-=1;
                        for(int j=0;j<=top;j++){
                            printf("%d\t",stack[j]);
                        }
                    }
                    break;

            case 3: if(top<=-1){
                        printf("Elements not presented in the stack\n");
                    }
                    else{
                        for(int j=0;j<=top;j++){
                            printf("%d\t",stack[j]);
                        }
                    }
                    break;
            case 4: exit(0);
            default: printf("Wrong input\n");
                    break;
        }


    }

}