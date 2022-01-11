#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main(int argc, char *argv[])
{
	char *args[]={"ls",NULL};
	execv(args[0],args);
}
