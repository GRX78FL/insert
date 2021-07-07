#include "../includes/include.h"

int main(int argc, char* argv[]) {

	int flag = 0;
	long interval = 0;
	char* delimiter;
	char* input;
	int i = 0;
	int c = 1;
	int params = 0;
	char *endptr;

	while (( flag = getopt(argc, argv, "d:i:s:")) != -1 ) {

		switch (flag) {
			
			case 'd':
				
				delimiter = optarg;
				params++;
				break;

			case 'i':
				
				interval = strtol(optarg, &endptr, 10);

				(*endptr) ? usage() : 0;

				params++;
				break;

			case 's':

				input = optarg;
				params++;
				break;

			default:

				usage();
				break;
		}
	}

	if (params != 3)
		usage();

	while (input[i] != '\0') {

		printf("%c", input[i]);
		
		((( c % interval) == 0) && (input[c] != '\0')) ? ( printf("%s", delimiter), c++, i++) : (c++, i++); 
	}

	puts("");
	return 0;
}
