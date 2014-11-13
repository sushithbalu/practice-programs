#include<stdio.h>
int main()
{
	long i;
	char *s = "apple, apple is not a fruit";
	char *p = "mango";

	i = printf("%s-%d %s-%d\n", s, strlen(s), p, strlen(p));
	printf("%*.*ld\n", 5, 5, i);
	return 0;
}
