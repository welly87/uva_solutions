#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
	int N;

	int a, b;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);

		int sum = 0;
		for (int j = a; j <= b; j++)
		{
			if (j % 2 != 0)
				sum += j;
		}

		printf("Case %d: %d\n", i+1, sum);
	}

	return 0;
}