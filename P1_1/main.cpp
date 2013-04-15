#include <stdio.h>
/**
基本求和
**/
int main()
{
	freopen("input.txt", "r", stdin);

	int a, b;
	while(scanf("%d%d", &a, &b) != EOF)
	{
		printf("%d\n", a + b);
	}

	return 0;
}