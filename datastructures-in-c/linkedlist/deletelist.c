struct node{
	int data;
	struct node *next;
};

#include<stdio.h>
#include<stdlib.h>

void push(struct node **headref, int data);
void deletelist(struct node **headref);
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
	deletelist(&head);
	print(head);
}

void deletelist(struct node **headref)
{
	struct node *current = *headref;
	struct node *next;

	while(current != NULL){
		next = current->next;
		free(current);
		current = next;
	}
	*headref = NULL;
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

