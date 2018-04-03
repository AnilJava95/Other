//
31.08.2015 00:05

/*****************************************
* Int to Alg 2014-2015 ce.istanbul.edu.tr*
* This program takes multiple agruments  *
* from command line and list them as a   *
* parameter list                         *
******************************************/
#include <stdio.h>
#include <stdlib.h>
int main ( int argc, char *argv[] )
{
	int i;
	// Loop to print each argument. argc gives the parameter count including application name.
	for (i = 0; i < argc; i++)
	{
		// argv keeps the parameter list as a string array.
		// char* argv[]  means Array of character pointers.
		printf("Paremeter %2d is: %s\n", (i+1) , argv[i]);
	}

	//Note for homework. If you need a integer argument instead of string. You can use atoi function to convert string to integer
	//Example: 
	// int rows = atoi(argv[1]);
	// int columns = atoi(argv[2]);

	system("PAUSE");
	return 0;
}
