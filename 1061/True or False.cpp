//15/15
#include<cstdio>
#include<vector>
using namespace std;

struct quis
{
	int grade;
	int answer;
}q;

int N, M, x;
vector<quis> v;
vector<int> v1;

int main() {
	scanf_s("%d%d", &N, &M);
	for (int i = 0; i < M; i++)
	{
		scanf_s("%d", &q.grade);
		v.push_back(q);
	}
	for (int i = 0; i < M; i++)
	{
		scanf_s("%d", &v[i].answer);
	}
	for (int i = 0; i < N; i++)
	{
		int g = 0;
		for (int j = 0; j < M; j++)
		{
			scanf_s("%d", &x);
			if (x==v[j].answer)
			{
				g += v[j].grade;
			}
		}
		v1.push_back(g);
	}

	for (int i = 0; i < N; i++)
	{
		if (i==N-1)
		{
			printf("%d", v1[i]);
		}
		else
		{
			printf("%d\n", v1[i]);
		}
	}

	return 0;
}