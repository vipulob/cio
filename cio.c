#include <stdio.h>
#include "cio.h"

int main(int argc, char *argv[])
{
	printf("Starting CIO program \n");

	printf("The Arguments passed are: %d \n", argc);

	initialize_fio();

	return 0;
}
