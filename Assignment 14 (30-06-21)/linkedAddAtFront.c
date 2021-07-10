#include<stdio.h>
struct node{
	int data;
	struct node *nextAdd;
};
int insertAtfront(int data);
void travelsal(void);
struct node *head = NULL;
int sizeOfList;

int main()
{
    travelsal();
	insertAtfront(1);
	travelsal();
	insertAtfront(2);
	travelsal();
}

int insertAtfront(int data)
{
	struct node *newNode = (struct node *)malloc(1*sizeof(struct node));
	if( newNode != NULL)
	{
		newNode->data = data;
		newNode->nextAdd = NULL;
		if(head == NULL)//for 1st node
		{
			head = newNode;
		}
		else
		{
			newNode->nextAdd = head;
			head = newNode;
		}
	}
	else
	{
		printf("new node cannot be created\n");
	}
}

void travelsal(void)
{
	struct node *temp;
	if(head == NULL)
	{
		printf("Linked list is empty\n");
		return;
	}
	temp = head;
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->nextAdd;
	}
	printf("\n");

}
