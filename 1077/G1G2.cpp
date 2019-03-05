//20/20
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;

int N, M;
int g;


int main() {
	scanf_s("%d%d", &N, &M);
	for (int i = 0; i < N; i++)
	{
		float G2;
		int max = 0, min = 100;
		vector<float> v;
		for (int i = 0; i < N; i++)
		{
			scanf_s("%d", &g);
			if (i == 0)
			{
				G2 = g;
			}
			else if (g >= 0 && g <= M)
			{

				if (g < min)
				{
					min = g;
				}
				if (g > max)
				{
					max = g;
				}
				v.push_back(g);
			}
		}
		float sum = 0,count = 0;
		float G1;
		int first_min = 1, first_max = 1;
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i]==min&&first_min)
			{
				first_min = 0;
				continue;
			}
			if (v[i]==max&&first_max)
			{
				first_max = 0;
				continue;
			}
			sum += v[i];
			count++;
		}
		G1 = sum / count;
		int G = floor((G1 + G2) / 2 + 0.5);
		printf("%d\n", G);
	}

	return 0;
}