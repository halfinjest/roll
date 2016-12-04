#include <stdio.h>
#include <stdlib.h>

#define CONF_COL "020103123404424444"
#define CONF_ROW "000100010001101111"
#define FOR_3(x) for (x = 0; x < 3; x++)
#define FOR_l(x) for (x = 0; x < l; x++)
#define INST_PIP pipRow[3 * (INST_ROW) + k] - '0'
#define INST_ROW pipCol[3 * dice[j] + i] - '0'

int main(int argc, char **argv)
{
	if (argc > 1 && atoi(argv[1]) > 0)
	{
		char *pipCol = CONF_COL, *pipRow = CONF_ROW;
		int i, j, k, l = atoi(argv[1]), dice[l];
		srand(time(NULL));
		FOR_l(i) dice[i] = rand() % 6;
		FOR_l(i) printf("   __________ ");
		printf("\n");
		FOR_l(i) printf("  |          |");
		printf("\n");
		FOR_3(i)
		{
			FOR_l(j)
			{
				printf("  |  ");
				FOR_3(k)
				{
					if (INST_PIP) printf("* ");
					else printf("  ");
				}
				printf("  |");
			}
			printf("\n");
		}
		FOR_l(i) printf("  |__________|");
		printf("\n\n");
	}
	else printf("Usage: roll <integer 1..>\n");
	return 0;
}
