#include<stdio.h>
#include<stdarg.h>

void myprintf(char *fmt, ...);

int main()
{
	int i = 12;
	myprintf("%d%s\n", i, "apple\n""oho");
	
	return 0;
}

void myprintf(char *fmt, ...)
{
	int ival;
	double dval;
	va_list ap;
	char *p, *sval;

	va_start(ap, fmt);
	for(p = fmt; *p; p++){
		if(*p != '%'){
			putchar(*p);
			continue;
		}
		switch(*++p){
			case'd': 
				ival = va_arg(ap, int);
				printf("%d", ival);
				break;
			case 'f':
				dval = va_arg(ap, double);
				printf("%f", dval);
			case 's':
				for(sval = va_arg(ap, char*); *sval; sval++){
					putchar(*sval);
				}
				break;
			default:
				putchar(*p);
				break;
		}
	}
	va_end(ap);
}
				
