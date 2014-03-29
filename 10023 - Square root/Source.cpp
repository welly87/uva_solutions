#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
	double p, n;
	int N;

	n = 2;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%lf",&p);
		printf("%.0lf\n", pow(p, 1 / n));
	}

	return 0;
}