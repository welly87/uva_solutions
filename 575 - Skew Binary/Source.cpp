#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char line[100];

	while (true)
	{
		scanf("%s", &line);

		if (strcmp(line, "0") == 0)
			break;

		int n = strlen(line);
		double e = n;
		long sum = 0;
		for (int j = 0; j < n; j++)
		{
			int val = line[j] - '0';
			//printf("%d\n", val);
			sum += val * (pow(2, e) - 1);
			e--;
		}

		printf("%ld\n", sum);
	}

	return 0;
}
