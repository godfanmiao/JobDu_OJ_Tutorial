#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int n;
	int buf[100];

	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &buf[i]);
		}

		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n - i - 1; j++)
			{
				if(buf[j] > buf[j + 1])
				{
					int tmp = buf[j];
					buf[j] = buf[j + 1];
					buf[j + 1] = tmp;
				}
			}
		}

		for(int i = 0; i < n; i++)
		{
			printf("%d ", buf[i]);
		}
		printf("\n");
	}
	return 0;
}