//15/15
#include<cstdio>
#include<vector>
using namespace std;

int M, N, up, down, replacer, color;
vector<int> v, v2;

int main() {
	scanf_s("%d%d", &M, &N);
	scanf_s("%d%d", &down, &up);
	scanf_s("%d", &replacer);

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf_s("%d", &color);
			if (color>=down&&color<=up)
			{
				v.push_back(replacer);
			}
			else
			{
				v.push_back(color);
			}
		}
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (j==0)
			{
				printf("%03d", v[i*N + j]);
			}
			else
			{
				printf(" %03d", v[i*N + j]);
			}
		}
		printf("\n");
	}

	return 0;
}
