
//Program-Circular Queue - Using Array

#include<stdio.h>

#define max 5

int cq[max],rear=-1,front=-1;

void enque(int n)
{
	if(front==(rear+1)%max)
		printf("Circular Queue is Full !....");
	else if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		cq[rear]=n;
	}
	else
	{
		rear=(rear+1)%max;
		cq[rear]=n;
	}
}

void deque()
{
	if(front==-1)
		printf("\nCircular Queue is Empty !....");
	else
	{
		printf("\nThe deleted Element is %d ",cq[front]);
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
			front=(front+1)%max;
	}
}

void display()
{
	int f;
	if(front==-1)
		printf("\nCircular Queue is Empty !....");
	else
	{
		printf("\nQueue contents :  ");
		if(front<=rear)
		{
			f=front;
			while(f<=rear)
			{
				printf("%3d",cq[f]);
				f++;
			}
		}
		else if(rear<front)
		{
			f=front;
			while(f<max)
			{
				printf("%3d",cq[f]);
				f++;
			}
			f=0;
			while(f<=rear)
	{
				printf("%3d",cq[f]);
				f++;
			}
		}
	}
}

void main()
{
	int ch,n;

	while(1)
	{
printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\nEnter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: if(front==(rear+1)%max)
					printf("Circular Queue is Full !....");
					else
					{
					printf("\nEnter the number to be inserted : ");
						scanf("%d",&n);
						enque(n);
					}
					break;
			case 2:	deque();
					break;
			case 3:	display();
					break;
			case 4:
			break;
		}
	}
}
