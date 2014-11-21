struct node{
	int data;
	struct node* left;
	struct node* right;
};

#include<stdio.h>
#include"tree.h"

int size(struct node* root);

int main()
{
	int i;
	struct node* root = NULL;

		root = insert(root, 19);
		root = insert(root, 10);
		root = insert(root, 13);
		root = insert(root, 12);
		root = insert(root, 17);
		root = insert(root, 6);
		root = insert(root, 18);
		root = insert(root, 3);
		root = insert(root, 9);
		treeprint(root);
	printf("\n%d\n", size(root));
	return 0;
}

int size(struct node* root)
{
	if(root == NULL) {
		return 0;
	}else {
		return  size(root->left) + 1 + size(root->right);
	}
}
