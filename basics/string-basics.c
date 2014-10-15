/*what happends if a \0 is there in the middle of a string*/
#include<stdio.h>
int main()
{
	char array0[10] = {'a', 'b', '\0', 'c', 'e'};
	char array1[30] = "apple is\n \ta\0 fruit";
	printf("0->%s\n1->%s\n", array0, array1);
	return 0;
}
