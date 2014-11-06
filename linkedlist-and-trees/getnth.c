#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

struct node{
	int data;
	struct node* next;
};

int getnth(struct node*, int);

int main()
{
	struct node *root = malloc(sizeof(struct node));
	root->data = 23;
	root->next = malloc(sizeof(root->next));
	root->next->data = 54;
	root->next->next = malloc(sizeof(root->next->next));
	root->next->next->data = 21;
	struct node *current = root;
	while(root != NULL){
		printf("%d->", root->data);
		root = root->next;
	}
	printf("\n--%d--\n", getnth(current, 1));
	free(root);
	return 0;
}

int getnth(struct node *root, int n)
{
	int c = 0;
	struct node *current = root;

	while(current != NULL){
		c++;
		current = current->next;
		if(c == n){
			return current->data;
		}
	}
	assert(0);
}
