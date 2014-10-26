#include<stdio.h>
int main()
{
	int number;
	scanf("%d", &number);
	switch(number){
		case 0: 
			printf("zero\n");
			break;
		case 1:
			printf("one\n");
			break;
		case 2:
			printf("two\n");
			break;
		case 3:
		case 4:
		case 5: printf("so many\n");
			break;
		default:
			printf("sev\n");
			break;
	}
	return 0;
}
