struct node{
	int data;
	struct node *next;
};

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int pop(struct node **);
void push(struct node **, int);
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
	printf("\n%d\n", pop(&head));
	print(head);
}

void print(struct node *head)
{
	struct node *current = head;

	while(current != NULL){
		printf("%d->", current->data);
		current = current->next;
	}
}

int pop(struct node **headref)
{
	int v;
	struct node *current = *headref;
	
	assert(current != NULL);
	v = current->data;
	*headref = current->next;
	return v;
}

void push(struct node **headref, int data)
{
	struct node *newnode = malloc(sizeof(struct node));

	newnode->data = data;
	newnode->next = *headref;
	*headref = newnode;
}

