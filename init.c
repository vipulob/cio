#include <stdio.h>
#include <unistd.h>

int parse_cmd_line(int argc, char *argv[])
{
	int opt;

	printf("Parsing command line\n");

	while((opt = getopt(argc, argv, "b")) != -1)
	{
		switch(opt)
		{
			case 'b':
				printf("The Program received block size parameter\n");
				break;
			default:
				printf("No option found");
				break;
		}
	}
	return 0;
}

int parse_options(int argc, char *argv[])
{
	parse_cmd_line(argc, argv);
}
