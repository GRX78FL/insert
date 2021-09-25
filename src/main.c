#include "../includes/include.h"

int
main(int argc, char *argv[]) {

	int flag = 0;
	long interval = 0;
	char* delimiter;
	char* input;
	int i = 0;
	int c = 1;
	char *endptr;
	bool rev;

	while (( flag = getopt(argc, argv, "d:i:s:r")) != -1 ) {

		switch (flag) {
			
			case 'd':
				
				delimiter = optarg;
				break;

			case 'i':
				
				interval = strtol(optarg, &endptr, 10);
				(*endptr) ? usage() : 0;
				break;

			case 's':

				input = optarg;
				break;
			
			case 'r':
				rev = true;
				break;

			default:

				usage();
				break;
		}
	}

	if (optind < 3)
		usage();

	if (rev) {


		int i = 0;

		while (input[i] != '\0')
		       	i++;

		rev_end(delimiter, interval, input, i);
		puts("");
	} else {

		while (input[i] != '\0') {

			printf("%c", input[i]);
		
			if ((( c % interval) == 0) && (input[c] != '\0')) { 
			
				printf("%s", delimiter);
				c++; i++;
			} else { 
				c++; i++;
			}	
		}
		
		puts("");
	}

	return 0;
}
