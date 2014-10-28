/* TCP-SOCK_STREAM; UDP-SOCK_DGRAM; */
#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<arpa/inet.h>

#define MAXW 100

void errxt(char *);

int main(int argc, char *argv[])
{
	int sfd;
	struct sockaddr_in sa;
	char msg[MAXW];

/* create socket */	
	if((sfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1){
		errxt("Failed to socket");
	}
	sa.sin_addr.s_addr = inet_addr("127.0.0.1");
	sa.sin_family = AF_INET;
	sa.sin_port = htons(80);

/* Establish connection */
	if(connect(sfd, (struct sockaddr *)&sa, sizeof(sa)) == -1){
		errxt("Connection error");
	}
	printf("connection Established.\n");

/* receive data */
	if(send(sfd, msg, sizeof(msg), 0) == -1){
		errxt("sending failed");
	}
	return 0;

}

void errxt(char *s)
{
	perror(s);
	exit(EXIT_FAILURE);
}


