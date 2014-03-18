#define _CRT_SECURE_NO_WARNINGS

// recursive backtracking

#include<stdio.h>

bool house[6][6];
bool edgeVisited[6][6];

int candidate[10];

void printSolution() 
{
	for (int i = 0; i <= 8; i++)
	{
		printf("%d", candidate[i]);
	}

	printf("\n");
}

void santaVisit(int current, int depth)
{
	candidate[depth] = current;

	if (depth == 8)
	{
		printSolution();
		return;
	}

	for (int i = 1; i <= 5; i++)
	{
		// if connected and not visited yet
		if (house[current][i] && !edgeVisited[current][i])
		{
			edgeVisited[current][i] = true; // mark this edge visited
			edgeVisited[i][current] = true; // mark this edge visited, bidirectional 

			santaVisit(i, depth + 1);

			// backtrack
			edgeVisited[current][i] = false; // undo this edge visited
			edgeVisited[i][current] = false; // undo this edge visited, bidirectional 
		}
	}
}

int main()
{
	house[1][2] = house[1][3] = house[1][5] = true;
	house[2][1] = house[2][3] = house[2][5] = true;
	house[3][1] = house[3][2] = house[3][4] = house[3][5] = true;
	house[4][3] = house[4][5] = true;
	house[5][1] = house[5][2] = house[5][3] = house[5][4] = true;

	santaVisit(1, 0);

	return 0;
}