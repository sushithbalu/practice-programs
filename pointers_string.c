#include<stdio.h>
int main()
{
	char *ptr = "apple is a fruit";
	char *p;
	p = ptr+1;
	printf("ptr = %s, p = %s", ptr, p);
	return 0;
}
