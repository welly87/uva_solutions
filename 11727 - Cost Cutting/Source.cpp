#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int N;

	int arr[3];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

		sort(&arr[0], &arr[3]);

		printf("Case %d: %d\n", i + 1, arr[1]);
	}

	return 0;
}