#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
	char current;
	bool first = true;
	while ((current = getchar()) != EOF)
	{
		if (current == '"')
		{
			if (first)
				printf("``");
			else
				printf("''");
			
			first = !first;
		}
		else
		{
			printf("%c", current);
		}
	}

	return 0;
}