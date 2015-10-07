#include <stdio.h>

int main()
{
	/* only by replacing missing condition in if statement 
           marked by (...), bring output as "Hello world!" */ 
<<<<<<< HEAD
	if (fork())
=======
	if (printf("Hello ") == 0)
>>>>>>> dc5d02aa216cc67225656798bb80c689fafed2de
		printf("Hello ");
	else
		printf("world!\n");

	return 0;
}
