//15/15
#include<cstdio>
#include<vector>
using namespace std;

struct gamble
{
	int n1;
	int b;
	int t;
	int n2;
}g;

int T, K;
vector<gamble> v;

int main() {
	scanf_s("%d%d", &T, &K);
	for (int i = 0; i < K; i++)
	{
		scanf_s("%d%d%d%d", &g.n1, &g.b, &g.t, &g.n2);
		v.push_back(g);
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (T == 0)
		{
			printf("Game Over.\n");
			break;
		}
		else if (T < v[i].t)
		{
			printf("Not enough tokens.  Total = %d.\n", T);
		}
		else if (v[i].n2 < v[i].n1&&v[i].b == 0)
		{
			T += v[i].t;
			printf("Win %d!  Total = %d.\n", v[i].t, T);
		}
		else if (v[i].n2 > v[i].n1&&v[i].b == 1)
		{
			T += v[i].t;
			printf("Win %d!  Total = %d.\n", v[i].t, T);
		}
		else
		{
			T -= v[i].t;
			printf("Lose %d.  Total = %d.\n", v[i].t, T);
		}
	}

	return 0;
}