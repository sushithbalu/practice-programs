struct node{
	int data;
	struct node *next;
};

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void insertnth(struct node **headref, int index, int data);
void push(struct node **headref, int data);
void print(struct node *head);
int main()
{
	int i;
	int *ip;
	struct node *head = NULL;
	struct node *current;

	for(i = 0; i < 10; i++){
		push(&head, i);
	}
	print(head);
	insertnth((&head), 4, 1132);
	printf("\n");
	print(head);
	printf("\n");
}

void insertnth(struct node **headref, int index, int data)
{
	int i;
	struct node *current = *headref;
	
	for(i = 0; i < index-1; i++){
		assert(current != NULL);
		current = current->next;
	}
	assert(current != NULL);
	push(&(current->next), data);
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

