#define CONF_COL "020103123404424444"
#define CONF_ROW "000100010001101111"
#define INST_PIP pipRow[3 * (INST_ROW) + k] - '0'
#define INST_ROW pipCol[3 * dice[j] + i] - '0'

void roll(int length, int *dice)
{
	char *pipCol = CONF_COL, *pipRow = CONF_ROW;
	int i, j, k;
	for (i = 0; i < length; i++) printf("   __________ ");
	printf("\n");
	for (i = 0; i < length; i++) printf("  |          |");
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < length; j++)
		{
			printf("  |  ");
			for (k = 0; k < 3; k++)
			{
				if (INST_PIP) printf("* ");
				else printf("  ");
			}
			printf("  |");
		}
		printf("\n");
	}
	for (i = 0; i < length; i++) printf("  |__________|");
	printf("\n\n");
}
