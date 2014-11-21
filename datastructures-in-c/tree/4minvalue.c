struct node{
	int data;
	struct node* left;
	struct node* right;
};

#include<stdio.h>
#include"tree.h"

int minvalue(struct node* );

int main()
{
	struct node* root = NULL;
	root = insert(root, 5);
	root = insert(root, 4);
	root = insert(root, 6);
	root = insert(root, 3);
	root = insert(root, 2);
	root = insert(root, 1);
	root = insert(root, 7);
	root = insert(root, 9);
	printf("%d", minvalue(root));		
	return 0;
}

int minvalue(struct node* root)
{
	struct node* current = root;
	
	while(current->left != NULL){
		current = current->left;
	}
	return (current->data);
}
