#include "../includes/include.h" 

void
rev_end(char *delimiter, int interval, char *input, int length) {

	int i = 0;
	bool stop = false;
	int new_index;

	new_index = length;
	new_index = new_index - interval;

	while (stop == false) {

		if (new_index <= 0) {

			new_index = 0;
			stop = true;
		}

		while (i != interval) {

			printf("%c", input[new_index+i]);
			i++;
		}
		
		i ^= i;

		printf("%s", delimiter);
		new_index = new_index - interval;

	}
}
