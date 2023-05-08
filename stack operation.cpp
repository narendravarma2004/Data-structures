#include <stdio.h>
#define max 5
int main()
{
	int stack[max];
	int top=-1,ch,ele,i;
	printf("Enter the choice 1=push and 2= pop and 3=display ");
	scanf("%d",&ch);
	do{
	switch(ch)
	{
		case 1:
			printf("Enter a element \n");
			scanf("%d",ele);
			if(top==max-1)
			{
				printf("no element will be pushed \n");
			}
			else
			{
				top=top+1;
				stack[top]=ele;
			}
			break;
		case 2:
			if(top ==-1)
			{
				printf("no element will poped \n");
			}
			else
			{
				printf("poped element =%d \n",stack[top]);
			    top=top-1;
			}
			break;
		case 3:
			printf("Elements to be displayed \n");
			if(top==-1)
			{
				printf("no  elements to be displayed \n");
			}
			else
			{
			for (i=0;i<=top;i++)
			{
				printf("%d",stack[i]);
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
