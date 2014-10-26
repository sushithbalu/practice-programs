/*segmentation fault^^^^*/
#include<stdio.h>
	
long myatoi1(const char *);
long myatoi2(const char *);

int main()
{
	char *ptr;
	scanf("%s", ptr);
	
	printf("1-> %ld\n", myatoi1(ptr));
	printf("2-> %ld\n", myatoi2(ptr));
	return 0;
}

long myatoi1(const char *s)
{
	long i = 0;
	if(s){
		while((*s >= '0')&&(*s <= '9')){
			i = i*10 + (*s-'0');
			s++;
		}
	}
	return i;
}

long myatoi2(const char s[])
{
	long i, n = 0;

	if(s){
	for(i = 0; (s[i] >= '0')&& (s[i] <= '9'); i++){
		n = n*10 + (s[i] - '0');
	}
	}
	return n;
}		
