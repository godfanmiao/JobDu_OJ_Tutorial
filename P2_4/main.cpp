#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

struct Student
{
	char name[110];
	int age;
	int score;
} buf[1000];

bool cmp(Student A, Student B)
{
	if(A.score != B.score)
		return A.score < B.score;
	else
	{
		int tmp = strcmp(A.name, B.name);
		if(tmp != 0)
			return tmp < 0;
		else
			return A.age < B.age;
	}
}
int main()
{
	freopen("input.txt", "r", stdin);

	int n;
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%s%d%d", &buf[i].name, &buf[i].age, &buf[i].score);
		}
		sort(buf, buf + n, cmp);
	}
}
