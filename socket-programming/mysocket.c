#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<arpa/inet.h>

int main(int argc, char *argv[])
{
	int sfd;
	struct sockaddr_in sa;

/* create socket */	
	if((sfd = socket(AF_INET, SOCK_STREAM, 0)) == -1){
		perror("Failed to socket");
		exit(EXIT_FAILURE);
	}
	sa.sin_addr.s_addr = inet_addr("74.125.236.129");
	sa.sin_family = AF_INET;
	sa.sin_port = htons(80);

/* remote connection */
	if(connect(sfd, (struct sockaddr *)&sa, sizeof(sa)) == -1){
		perror("Connection error");
		exit(EXIT_FAILURE);
	}
	printf("connected!");
	return 0;
}
