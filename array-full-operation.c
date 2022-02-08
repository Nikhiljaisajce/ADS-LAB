#include <stdio.h>
#include <stdlib.h>
int arr[100],n,i;

void  main()
{
     int a, b;
    printf(" enter the number of elements\n");
    scanf("%d",&n);
    printf("\n enter the elements \n");
    for (i = 0; i < n; i++)
        scanf("%d",&arr[i]);
        while(1){
            printf("\n please choose an operation from below\n 1.Array traversal\n 2.Array insertion\n 3.Array deletion\n 4.Array Searching\n 0. Exit\n ");
            scanf("%d",&a);
            switch(a){
                case 1 : traversal(arr,n);
                        break;
                case 2 :n=insert(&arr);
                        break;
                case 3 : delete1(&arr,n);
                            n--;
                        break;
                case 4 :  search(arr,n);
                        break;
                case 0 : exit(0);

                default : printf(" wrong input\n");
                            break;

                }
        }
    }


    void traversal(){
            printf(" \n the elements are \n");
            for (i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");
        }
    int insert(int *arr){
       int x,pos ;
            printf("enter the elements to be insert\n");
            scanf("%d",&x);
            for (i = 0; i < n; i++)
                printf("%d\t", *(arr+i));
            printf("\n enter the position of the element to insert\n");
            scanf("%d",&pos);
            n++;
            for (i = n; i >= pos; i--)
                *(arr+i) = *((arr+i)-1);
            arr[pos - 1] = x;
            for (i = 0; i < n; i++)
                printf("%d ", *(arr+i));
            printf("\n");
            return n;
}

void delete1(int *arr,int n){
    int x,pos ;
    printf("Enter the location where you wish to delete element\n");
   scanf("%d", &pos);

   if (pos >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (i = pos - 1; i < n - 1; i++)
         *(arr+i) = *((arr+i)+1);

      printf("Resultant array:\n");

      for (i = 0; i < n - 1; i++)
         printf("%d\n", *(arr+i));
   }
}
void search(int arr[100],int n){
    int x,pos,b,flag=0 ;

        printf("\n enter the elements to be searched\n");
        scanf("%d",&b);
        for(i=0;i<=n;i++){
            if(b==arr[i])

                flag=i;
        }
        if(flag!=0)
             printf("\n the he element %d is found at position %d\n",b,flag+1);
        else
            printf("not found");
}


