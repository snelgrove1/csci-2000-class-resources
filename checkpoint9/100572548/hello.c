#include <stdio.h>

int main()
{
	/* only by replacing missing condition in if statement
           marked by (...), bring output as "Hello world!" */
	if (1>0 && !printf("Hello "))
		printf("Hello ");
	else
		printf("world!\n");

	return 0;
}
