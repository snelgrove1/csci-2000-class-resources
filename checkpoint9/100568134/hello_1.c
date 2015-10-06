#include <stdio.h>

int main()
{
	/* only by replacing missing condition in if statement 
           marked by (...), bring output as "Hello world!" */ 
  // linux system call fork returns the child process id to the parent process
  // and in the child process returns 0, so assuming process interleaving works
  // in our favour Hello should print before world
	if (fork())
		printf("Hello ");
	else
		printf("world!\n");

	return 0;
}
