#include<stdio.h>

void get0();
void get1();
void get2();

int main()
{
//	get0();
//	get1();
	get2();
	return 0;
}

void get0()
{
	int c;

	for(;;){
		c = getchar();
		if(c == EOF){
			break;
		}
		putchar(c);
	}
}

void get1()
{
	int  c;	

	for(c = getchar(); c != EOF; c = getchar())
		putchar(c);
}

void get2()
{
	int c;	

	while((c = getchar()) != EOF){
		putchar(c);
	}
}
