#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node*prev;
	struct node*next;
};
struct node *head=NULL;
void insertAtBeginning(int data){
	struct node *newNode =(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->prev=NULL;
	newNode->next=head;
	if(head != NULL)
	head->prev=newNode;
	head=newNode;
}
void insertAtEnd(int data)
{
	struct node *newNode=(struct node*) malloc(sizeof(struct node));
	struct node *current=head;
	newNode->data=data;
	newNode->next=NULL;
	if(head ==NULL)
	{
		newNode->prev=NULL;
	head = newNode;
	return;
}
while(current -> next !=NULL)
current=current->next;
current->next=newNode;
newNode->prev=current;
}
void deleteNode(int key)
{
	struct node *current=head;
	while(current !=NULL && current->data != key)
	current=current->next;
	if(current == NULL)
	return ;
	if(current ->prev != NULL)
	current ->prev->next=current->next;
	else
	head=current->next;
	if(current->next !=NULL)
	current ->next->prev=current->prev;
	free(current);
}
void display()
{
	struct node *current = head;
	while(current != NULL)
	{
		printf("%d ",current->data);
		current=current->next;
	}
}
int main()
{
	insertAtBeginning(5);
	insertAtBeginning(10);
	insertAtEnd(15);
	deleteNode(10);
	display();
	return 0;
	}
