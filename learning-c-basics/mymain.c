#include <stdio.h>
/*int main() or int main(void) ?*/
int main()
{
	static int i = 256;
	if (--i){
		printf("%d ", i);
		main(i);
	}
	return 0;
}

