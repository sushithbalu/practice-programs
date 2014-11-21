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

int haspathsum(struct node* root, int sum)
{
	int subsum = sum - root->data;

	if(root == NULL) {
		return (sum == 0);
	} else {
	return(haspathsum(root->left, sum)||
		haspathsum(root->right, sum));
	}
