#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

char pixels[25][25];

int dimension;

void dfs(int m, int n)
{
	if (m < 0 || n < 0 || m > dimension || n > dimension) return;

	if (pixels[m][n] == '0') return;

	pixels[m][n] = '0';

	for (int i = -1; i < 2; i++)
		for (int j = -1; j < 2; j++)
		{
			if (pixels[m + i][n + j] == '1')
			{
				//pixels[m + i][n + j] = '0';
				dfs(m + i, n + j);
			}
		}

}

void floodFill(int x, int y)
{
	if (x < 0 || y < 0 || x > dimension || y > dimension) return;

	if (pixels[x][y] == '0') return;

	pixels[x][y] = '0';

	for (int i = -1; i < 2; i++)
	{
		for (int j = -1; j < 2; j++)
		{
			floodFill(x + i, y + j);
		}
	}
}



int main2()
{
	int numOfMap = 0;

	while (scanf("%d", &dimension) != EOF)
	{
		for (int i = 0; i < dimension; i++)
		{
			scanf("%s", &pixels[i]);
		}

		int numOfComponent = 0;
		for (int i = 0; i < dimension; i++)
		{
			for (int j = 0; j < dimension; j++)
			{
				if (pixels[i][j] == '0') continue;

				numOfComponent++;
				dfs(i, j);
				//floodFill(i, j);
			}
		}
		// cout<<"Image number "<<tc<<" contains "<<cnt<<" war eagles."<<endl;
		printf("Image number %d contains %d war eagles.\n", ++numOfMap, numOfComponent);
	}

	return 0;
}