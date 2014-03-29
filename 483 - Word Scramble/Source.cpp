#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stack>

using namespace std;

int main()
{
	char current;
	stack<char> s;

	while ((current = getchar()) != EOF)
	{
		if (current == ' ' || current == '\n')
		{
			while (!s.empty())
			{
				printf("%c", s.top());
				s.pop();
			}

			printf("%c", current);
		}
		else
		{
			s.push(current);
		}
	}

	return 0;
}