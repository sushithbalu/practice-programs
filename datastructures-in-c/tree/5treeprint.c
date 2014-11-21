struct node{
	int data;
	struct node* left;
	struct node* right;
};

#include<stdio.h>
#include"tree.h"

void treeprint(struct node* root);

int main()
{
	struct node* root;
	root = insert(root, 7);
	root = insert(root, 6);
	root = insert(root, 5);
	root = insert(root, 9);
	root = insert(root, 3);
	root = insert(root, 2);
	root = insert(root, 1);
	root = insert(root, 4);
	treeprint(root);
	return 0;
}


void treeprint(struct node* root)
{
	if(root == NULL)
		return;

	treeprint(root->left);
	printf("%d\n", root->data);
	treeprint(root->right);
}
