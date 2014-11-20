#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node * build();
int length(struct node *current);
int main()
{
	struct node* current = build();
	struct node* temp = NULL;
	
	temp = current;
	while(current != NULL){
		printf("%d->", current->data);
		current = current->next;
	}
	printf("\n%d\n", length(temp));
	return 0;
}

struct node *build()
{
	struct node *head = NULL;
	head = malloc(sizeof (struct node));
	head->data = 1;
	head->next =  malloc(sizeof (struct node));
	head->next->data = 2;
	head->next->next = malloc(sizeof (struct node));
	head->next->next->data = 4;
	head->next->next->next = NULL;
	
	return head;
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
