#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<cmath>

void solve(int N)
{
	bool firstime = true;
	printf("%d = ", N);

	if (N < 0)
	{
		printf("-1");
		N *= -1;
		firstime = false;
	}
	else if (N == 1)
	{
		printf("1\n");
		return;
	}

	int l = sqrt(N);

	for (int i = 2; i <= l; i++)
	{
		while (N % i == 0)
		{
			N /= i;

			if (!firstime)
				printf(" x ");
			else
				firstime = false;

			printf("%d", i);
		}
	}

	if (N != 1)
	{
		if (!firstime)
			printf(" x ");

		printf("%d", N);
	}

	printf("\n");
}

int main()
{
	int N = 0;
	scanf("%d", &N);

	while (N != 0)
	{
		solve(N);
		scanf("%d", &N);
	}

	return 0;
}