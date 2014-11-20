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
	int *ip;
	struct node *head = NULL;
	struct node *current;
	int a[10] = {234, 6, 67, 5, 234, 869, 89, 5566, 89, 34434};
	ip = a;
	for(i = 0; i < 10; i++){
		push(&head, a[i]);
	}
	print(head);
	printf("NULL\n%d\n", count(head, 3));
	printf("\n%d \n", length(head));
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

