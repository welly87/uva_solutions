#define _CRT_SECURE_NO_WARNINGS

// flood fill

#include<stdio.h>

int row, column;

char grids[101][101];

void floodFill(int x, int y)
{
	for (int i = -1; i < 2; i++)
	{
		for (int j = -1; j < 2; j++)
		{
			if (x + i >= row || y + j >= column || x + i < 0 || y + i < 0) continue;

			if (grids[x + i][y + j] == '@')
			{
				grids[x + i][y + j] = '*';
				floodFill(x + i, y + j);
			}
		}
	}
}

int main()
{
	while (true)
	{
		scanf("%d %d", &row, &column);

		if (row == 0)
			break;

		for (int i = 0; i < row; i++)
			scanf("%s", grids[i]);

		int count = 0;

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				if (grids[i][j] == '@')
				{
					count++;
					floodFill(i, j);
				}
			}
		}

		printf("%d\n", count);
	}
	return 0;
}