#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node * insert(struct node *root, int data);
void treeprint(struct node *root);
struct node *newnode(int data);
int main()
{
	struct node *root = NULL;
	root = insert(root, 12);
	root = insert(root, 2233);
	root = insert(root, 1);
	root = insert(root, 1423);
	root = insert(root, 1334);
	root = insert(root, 32323);
	root = insert(root, 23);
	root = insert(root, 133);
	root = insert(root, 123);
	root = insert(root, 13);
	root = insert(root, 12);
	treeprint(root);
	return 0;
}

struct node *newnode(int data)
{
	struct node *new = malloc(sizeof(struct node));
	new->data = data;
	new->left = NULL;
	new->right = NULL;
	return new;
}


struct node * insert(struct node *root, int data)
{
	if(root == NULL){
		return newnode(data);
	} else {
		if(data <= root->data){
			root->left = insert(root->left, data);
		} else {
			root->right = insert(root->right, data);
		}
	}
	return root;
}

void treeprint(struct node *root)
{
	if(root == NULL){
		return;
	} else{
		printf("%d^ ", root->data);
		treeprint(root->left);
		treeprint(root->right);
	}
}
