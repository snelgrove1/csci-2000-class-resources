#include <stdio.h>

int main()
{
	/* only by replacing missing condition in if statement 
 *            marked by (...), bring output as "Hello world!" */ 
<<<<<<< HEAD:checkpoint9/hello.c
	if (!printf("Hello "))
=======
	if (!printf ("Hello "))
>>>>>>> 17447ee00241ff201ed0a5bca0325d2b57e98638:checkpoint9/100552082/hello.c
		printf("Hello ");
	else
		printf("world!\n");

	return 0;
}