#include<stdio.h>
main()
{
	int a = 10;
	int b = 11;
	a ^= b ^= a ^= b;
	printf("%d %d\n",a, b);
}
