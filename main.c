#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "roll.h"

int main(int argc, char **argv)
{
	if (argc > 1 && atoi(argv[1]) > 0)
	{
		int i, length = atoi(argv[1]), *dice = malloc(sizeof(int) * length);
		srand(time(NULL));
		for (i = 0; i < length; i++) dice[i] = rand() % 6;
		roll(length, dice);
	}
	else printf("Usage: roll <integer 1..>\n");
	return 0;
}
