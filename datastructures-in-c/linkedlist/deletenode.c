struct node{
	int data;
	struct node *next;
};

#include<stdio.h>
#include<stdlib.h>


void fbsplit(struct node *source, struct node **fref, struct node **bref);
void push(struct node **headref, int data);
void delete(struct node *head, int);
int length(struct node *head);
void print(struct node *head);

int main()
{
	int i;
	struct node *head = NULL;
	struct node *current = head;
	for(i = 0; i < 10; i++){
		push(&head, i);
	}
	print(head);
	delete(head, 4);
	printf("\n\n");
	print(head);	
	printf("\n%d \n", length(head));
	
}

void delete(struct node *head, int index)
{
	int i;
	struct node *current = head;
	
	for(i = 0; i < index-1; i++){
		current = current->next;
	}
	free(current->next);
	current->next = current->next->next;
}

void fbsplit(struct node *source, struct node **fref, struct node **bref)
{
	int len = length(source), i;
	int lenp;
	struct node *current = source;

	if(len < 2){
		*fref = source;
		*bref = NULL;
	} else {
		lenp = (len-1)/2;
		for(i = 0; i < lenp; i++){
			current = current->next;
		}
		*bref = current->next;
		current->next = NULL;
		*fref = source;
	}
}


int length(struct node *head)
{
	int count = 0;
	struct node *current = head;
	
	while(current != NULL){
		count++;
		current = current->next;
	}
	return count;
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

