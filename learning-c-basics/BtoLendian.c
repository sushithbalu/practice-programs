#include<stdio.h>
int main()
{
	int n, i, val;
	char *ptr;

	n = 1;
	ptr = (char*)(&n);
	printf("hexval of %d is ox%x\n", n, n);	
	val = *(ptr);
	if(val == 1){
		printf("little endian,%x\n", val);
	} else {
		printf("big endian, %x\n", val);
	}
	return 0;
}
