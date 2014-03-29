#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
	char current;
	
	while ((current = getchar()) != EOF)
	{

		if (current == '\n')
			printf("%c", current);
		else
			printf("%c", current - 7);
	}

	return 0;
}