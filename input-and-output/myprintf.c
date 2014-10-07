/* '-' right justification*/
#include<stdio.h>
int main()
{
	char *s = "apple is a fruit";
	int i;
	for(i = 1; i < 11; i++){
		printf("%-2d %s\n", i, s);
	}
	return 0;
}
