#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[3];

bool is_right_triangle()
{
	return (arr[0] * arr[0] + arr[1] * arr[1]) == (arr[2] * arr[2]);
}

int main()
{
	while (true)
	{
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

		if ((arr[0] + arr[1] + arr[2]) == 0)
			break;

		sort(&arr[0], &arr[3]);

		if (is_right_triangle())
			printf("right\n");
		else
			printf("wrong\n");
	}

	return 0;
}