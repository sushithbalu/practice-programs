struct node{
	int data;
	struct node* left;
	struct node* right;
};

#include<stdio.h>
#include"tree.h"

int maxdepth(struct node*);

int main()
{
	int i;
	struct node* root = NULL;
	
	for(i = 1; i < 10; i++){
		root = insert(root, i);
	}
#if 0	
	root = insert(root, 19);
	root = insert(root, 10);
	root = insert(root, 13);
	root = insert(root, 12);
	root = insert(root, 17);
	root = insert(root, 6);
	root = insert(root, 18);
	root = insert(root, 3);
	root = insert(root, 9);
#endif
	treeprint(root);
	printf("\n%d\n", maxdepth(root));
	return 0;
}


int maxdepth(struct node *root)
{
	int leftd, rightd;
	if (root == NULL)
		return 0;
	else
		leftd = maxdepth(root->left);
		rightd = maxdepth(root->right);
		if (leftd > rightd)
			return (leftd+1);
		else
			return (rightd+1);
}
