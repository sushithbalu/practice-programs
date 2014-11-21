
struct node{
	int data;
	struct node* left;
	struct node* right;
};

#include<stdio.h>
#include<stdlib.h>

#if 0
struct node* newnode(int data);
struct node* insert(struct node* , int);

int main()
{

	return 0;
}

#endif

struct node* newnode(int data) 
{
	struct node* new = malloc(sizeof(struct node));
	new->data = data;
	new->left = NULL;
	new->right = NULL;
	return (new);
}

struct node* insert(struct node* node, int data)
{
	if(node == NULL){
		return newnode(data);
	} else {
		if(data<= node->data)
			node->left = insert(node->left, data);
		else
			node->right = insert(node->right, data);
	}
	return node;
}

void treeprint(struct node* root)
{
	if(root == NULL){
		return;
	} else {
		treeprint(root->left);
		printf("%d\n", root->data);
		treeprint(root->right);
	}
}
