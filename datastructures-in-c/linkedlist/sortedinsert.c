struct node{
	int data;
	struct node *next;
};

#include<stdio.h>
#include<stdlib.h>

void push(struct node **headref, int data);
void print(struct node *head);
int main()
{
	int i;
	struct node *head = NULL;
	struct node *current;
	for(i = 0; i < 10; i++){
		push(&head, i);
	}
	print(head);
	printf("\n%d \n", length(head));
}

void sortedinsert(struct node **headref, struct node *newnode)
{
	struct node *current;
	if(*headref->next == NULL || (*headref)->data <= newnode->data){
		newnode->next = *headref;
		*headref = newnode;
	} else {
		current = *headref;
	while(current->next != NULL && current->next->data < newnode->data){
		current = current->next;
	}
	newnode->next = current->next;
	current->next = newnode;
}


void print(struct node *head)
{
	struct node *current = head;

	while(current != NULL){
		printf("%d->", current->data);
		current = current->next;
	}
}

void push(struct node **headref, int data)
{
	struct node * newnode = malloc(sizeof(struct node));
	
	newnode->data = data;
	newnode->next = *headref;
	*headref = newnode;
}

