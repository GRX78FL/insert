#pragma once

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <getopt.h>
#include <ctype.h>

void usage();
void rev_end(char *delimiter, int interval, char *input, int length);
