#define _CRT_SECURE_NO_WARNINGS

// backtracking

#include<stdio.h>
//#include<math.h>

int abs(int a)
{
	if (a < 0) return -a;
	return a;
}

int solutions[92][8];

int candidate[8];

int counter;

void print_all_solution_for(int row, int col)
{
	int lineCounter = 0;
	for (int i = 0; i < 92; i++)
	{
		if (solutions[i][col - 1] == row)
		{
			printf("%2d      %d", ++lineCounter, solutions[i][0]);
			for (int j = 1; j < 8; j++)
			{
				printf(" %d", solutions[i][j]);
			}
			printf("\n");
		}
	}
}

bool is_allow_to_place(int queen, int row)
{
	for (int prev = 0; prev < queen; prev++)
	{
		if (candidate[prev] == row || (abs(candidate[prev] - row) == abs(prev - queen)))
			return false;
	}
	return true;
}

void backtrack(int queen)
{
	for (int row = 0; row < 8; row++) // which row to place
	{
		if (!is_allow_to_place(queen, row)) continue;
		
		candidate[queen] = row;

		if (queen == 7) // this is the valid result
		{
			// copy the result
			for (int i = 0; i < 8; i++)
				solutions[counter][i] = candidate[i] + 1;
			counter++;
		}
		else
			backtrack(queen + 1);
	}
}

int main()
{
	backtrack(0);
	
	int N = 0;
	scanf("%d", &N);

	while (N--)
	{
		int row, col;
		scanf("%d %d", &row, &col);

		printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");

		print_all_solution_for(row, col);

		if (N) printf("\n");
	}

	return 0;
}