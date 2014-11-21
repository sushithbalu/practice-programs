struct node{
	int data;
	struct node* left;
	struct node* right;
};

#include<stdio.h>
#include"tree.h"


int main()
{
	int i;
	struct node* root;
	for(i = 0; i < 10; i++){
		insert(root, i);
	}
	return 0;
}

#if 0
void doubletree( struct node* root)
{
	struct node* temp;
	if(root == NULL){
		return;
	} else {
		temp = node->left;
		node->left = malloc(sizeof(struct node));
		node->left->data = temp->data;
		node->left->left = NULL;;
		node->left->right = NULL;

#endif




