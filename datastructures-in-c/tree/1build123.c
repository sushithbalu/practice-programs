struct node{
	int date;
	struct node* left;
	struct node* right;
};
#include<stdio.h>
#include"tree.h"

struct node* build123();

int main()
{
	struct node* root;
	root = build123();
	treeprint(root);	
	return 0;
}


struct node* build123(){
	struct node* new = NULL;
	new = insert(new, 1);
	new = insert(new, 2); 
	new = insert(new, 3);
	return new;
}
