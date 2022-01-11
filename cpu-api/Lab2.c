#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int
main(int argc, char *argv[])
{
	char *myargs[2];
	myargs[0] = strdup("ls");   // program: "wc" (word count)
	myargs[1] = NULL;           // marks end of array
	execvp(myargs[0], myargs);  // runs word count
}
