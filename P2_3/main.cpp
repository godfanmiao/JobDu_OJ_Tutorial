#include <stdio.h>
#include <algorithm>
using namespace std;
/**
Sorting in descent order using algorithm lib.
**/
bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	freopen("input.txt", "r", stdin);

	int n;
	int buf[10000];

	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &buf[i]);
		}
		
		sort(buf, buf + n, cmp);

		for(int i = 0; i < n; i++)
		{
			printf("%d ", buf[i]);
		}

		printf("\n");
	}

}