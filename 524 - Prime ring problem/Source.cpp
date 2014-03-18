#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int N;

int candidates[17];
int visited[17];

bool isPrime(int prime)
{
	if (prime <= 1) return false;
	if (prime == 2) return true;
	if (prime % 2 == 0) return false;

	for (int i = 3; i * i <= prime; i+=2)
	{
		if (prime % i == 0) return false;
	}

	return true;
}

void printSolution()
{
	for (int i = 0; i < N; i++)
	{
		if (i == 0)
			printf("%d", candidates[i]);
		else
			printf(" %d", candidates[i]);
	}

	printf("\n");
}

void primering(int current, int depth)
{
	candidates[depth] = current;

	if (depth == N - 1 && isPrime(current + 1))
	{
		printSolution();
		return;
	}

	for (int i = 2; i <= N; i++)
	{
		if (!visited[i] && isPrime(current + i))
		{
			visited[i] = true;
			primering(i, depth + 1);
			visited[i] = false;
		}
	}
}

int main()
{
	int count = 1;
	while (scanf("%d", &N) != EOF)
	{
		if (count > 1)
			printf("\n");

		printf("Case %d:\n", count++);
		primering(1, 0);
	}
	
	return 0;
}