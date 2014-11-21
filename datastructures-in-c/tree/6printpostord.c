struct node{
	int data;
	struct node* left;
	struct node* right;
};


#include<stdio.h>
#include"tree.h"

void printpostord(struct node* root);

int main()
{
	struct node* root = NULL;
	root = insert(root,9);	
	root = insert(root,12);	
	root = insert(root,65);	
	root = insert(root,23);	
	root = insert(root,11);	
	root = insert(root,6);	
	root = insert(root,98);	
	root = insert(root,23);	
	root = insert(root,3);
	printpostord(root);	
	return 0;
}

void printpostord(struct node* root)
{
	if(root == NULL)
		return;
	printpostord(root->left);
	printpostord(root->right);
	printf("%d\n", root->data);
}
