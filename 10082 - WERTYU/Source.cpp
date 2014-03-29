#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

char keyboard[] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=',
					'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\',
					'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\'',
					'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/' };


char fix_char(char c)
{
	for (int i = 0; i < sizeof(keyboard) / sizeof(char); i++)
	{
		if (keyboard[i] == c)
		{
			return keyboard[i - 1];
		}
	}

	return ' ';
}

int main()
{
	
	char current;

	while ((current = getchar()) != EOF)
	{
		if (current == ' ' || current == '\n')
			printf("%c", current);
		else
			printf("%c", fix_char(current));
	}

	return 0;
}