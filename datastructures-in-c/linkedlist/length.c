struct node {
	int data;
	struct node *next;
};

int length(struct node *head)
{
	int count = 0;
	struct node *current = head;
	
	while(current != NULL){
		count++;
		current = current->next;
	}
} 
