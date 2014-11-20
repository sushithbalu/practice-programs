struct node{
	int data;
	struct node *next;
};

#include<stdio.h>
#include<stdlib.h>

void push(struct node **headref, int data);
void print(struct node *head);
int count(struct node *head, int *value);
int main()
{
	int i;
	int *ip;
	struct node *head = NULL;
	struct node *current;
//	int a[10] = {234, 6, 67, 5, 234, 869, 89, 5566, 89, 34434};
	ip = a;
	for(i = 0; i < 10; i++){
		push(&head, a[i]);
	}
	count(head, );
	getnth(head, 4);
	print(head);
	printf("NULL\n%d\n", count(head, 3));
	printf("\n%d \n", length(head));
}

int getnth(struct node *head, int index)
{
	int c = 0, v;
	struct node *current = head;

	while(current != NULL){
		if(c == index){
			v = current->data;
		}
		current = current->next;
	}
	return v;
}
int count(struct node *head, int *value)
{
	int c = 0;
	struct node *current = head;

	while(current != NULL){
		if(current->data == *value){
			c++;
		}	
		current = current->next;
	}
	return c;
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
