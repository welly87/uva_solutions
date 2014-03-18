#define _CRT_SECURE_NO_WARNINGS

// flood fill


#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<queue>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define PB push_back
#define pi acos(-1.0)
#define eps 1e-9

char position[25][25];
int dimention;

void dfs2(int m, int n)
{
	for (int i = -1; i < 2; i++)
	{
		for (int j = -1; j < 2; j++)
		{
			if (m + i < 0 || n + j < 0 || m + i >= dimention || n + j >= dimention) continue;
			
			if (position[m + i][n + j] == '0') continue;

			position[m + i][n + j] = '0';

			dfs2(m + i, n + j);
		}
	}
}

int main()
{
	int tc = 1;
	while (scanf("%d", &dimention) != EOF)
	{
		int cnt = 0;

		for (int k = 0; k < dimention; k++)
			scanf("%s", &position[k]);

		for (int k = 0; k < dimention; k++)
		{
			for (int l = 0; l < dimention; l++)
			{
				if (position[k][l] == '0') continue;

				cnt++;
				dfs2(k, l);
			}
		}

		printf("Image number %d contains %d war eagles.\n", tc, cnt);
		tc++;

	}
	return 0;
}