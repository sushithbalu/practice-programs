struct node{
	int data;
	struct node* left;
	struct node* right;
};


#include<stdio.h>
#include"tree.h"


int main()
{

	return 0;
}

void mirror(struct node* root)
{
	struct node* temp;

	if (current == NULL) {
		return;
	} else {
		mirror(root->left);
		mirror(root->right);
		temp = root->left;
		root->left = root->right;
		root->right = temp;
	}
}
