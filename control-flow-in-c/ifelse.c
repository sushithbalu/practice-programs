#include<stdio.h>
int main()
{
	int score;

	while((scanf("%d", &score) != EOF)){
		if(score >= 90){
			printf("great\n");
		} else if(score >= 70){
			printf("Ok!\n");
		} else if(score >= 60){
			printf("work hard!\n");
		} else {
			printf("...............\n");
			break;
		}
	}

	return 0;
}
