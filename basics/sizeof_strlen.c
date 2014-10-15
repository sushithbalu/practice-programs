
/*
sizeof(type) yields the storage size of the object or type in bytes.
sizeof type in particular platform.
sizeof(array) yields size of string in the array.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 113211111;
	char array[100] = "father of Linux is Linus torvalds";
	char *ptr = " father of Linux is Linus torvalds";

//	array[12] = '\0';
	printf("sizeof = %d, strlen = %d\n", sizeof(array), strlen(array));
	printf("sizeof = %d, strlen = %d\n", sizeof(ptr), strlen(ptr));
	printf("sizeof(i) = %d", sizeof(i));
}
