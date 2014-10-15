#include<stdio.h>
int main()
{
	int i = 1132;
	float f = 113211321132.0;
	char c = 's';
	int iarray[15] = {1112, 1, 3, 2, 1, 1, 3, 2,1,1,3,2};
	char sarray[15] = "sizeof string";
	char *ptr = "sizeof ptr";
	
	printf("i = %d, int %d\n", sizeof(i), sizeof(int));
	printf("f = %d, float %d\n", sizeof(f), sizeof(float));
	printf("c = %d, char %d\n", sizeof(c), sizeof(char));
	printf("iarray %d, sarray %d\n", sizeof(iarray), sizeof(sarray));
	printf("ptr %d, char* %d\n", sizeof(ptr), sizeof(char*));
}
