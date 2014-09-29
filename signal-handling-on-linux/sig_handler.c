/*do not run this program*/
#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

void sig_handler(int signum);

int main()
{
	signal(SIGINT, sig_handler);
		printf("helloooo");
	sleep(3); /*press ctrl+c within this time*/	
	return 0;
}

void sig_handler(int signum)
{
	printf("received signal %d \n", signum);
}
