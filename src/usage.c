#include "../includes/include.h"

void usage() {
	
	puts("Usage: insert -d <delimiter> -i <interval> -s <string>\n");
	
	puts("example: insert -d ' ' -i 4 -s R1JYNzhGTCBzYXlzICJ0aGFuayBtZSBsYXRlciIgOikK");
	puts("output: R1JY NzhG TCBz YXlz ICJ0 aGFu ayBt ZSBs YXRl ciIg OikK");

	exit(EXIT_FAILURE);
}
