#include <stdio.h>
#define max 5
int main()
{
	int queue[max];
	int front=-1,rear=-1,ch,ele,i;
	printf("Enter the choice 1=enqueue and 2=dequeue and 3=display ");
	scanf("%d",&ch);
	do{
	switch(ch)
	{
		case 1:
			printf("Enter a element \n");
			scanf("%d",ele);
			if(rear==max-1)
			{
				printf("no element will be enqueue \n");
			}
			else if(rear==-1)
			{
				front=0;
				rear=0;
				queue[rear]=ele;
			}
			else
			{
				rear=rear+1;
				queue[rear]=ele;
			}
			break;
		case 2:
			if(front ==-1)
			{
				printf("queue is empty you cant dequeue \n");
			}
			else
			{
				printf("dequed element =%d \n",queue[front]);
			    front=front+1;
			}
			break;
		case 3:
			printf("Elements to be displayed \n");
			if(front==-1)
			{
				printf(" queue is empty no  elements to be displayed \n");
			}
			else
			{
			for (i=front;i<=rear;i++)
			{
				printf("%d ",queue[i]);
			}
		    }
			break;
		default:
			printf("Wrong choice entered \n");
	}
		printf("Enter the choice \n");
		scanf("%d",&ch);
		}
		while(ch<=3);
}
