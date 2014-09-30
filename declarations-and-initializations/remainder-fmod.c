/*remainder of floating point number*/
/*gcc remainder-fmod.c -lm*/

#include<stdio.h>
#include<math.h>

int main()
{
	double d;
	d = fmod(3.14143, 2.12345);
	printf("%lf", d);
	return 0;
}
