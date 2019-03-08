//15/15
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;

int maxN = 10;
vector<int> v;

int is_N_number(int k) {
	int result, temp, N;
	string str_k = to_string(k);
	string str_result;
	for (int i = 0; i < maxN; i++)
	{
		result = i * pow(k, 2);
		temp = result % (int)pow(10, str_k.length());
		str_result = to_string(temp);
		if (str_k == str_result)
		{
			N = i;
			return N;
		}
	}
	return -1;
}

int main() {
	int M, K, N, NK;
	scanf("%d", &M);
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &K);
		v.push_back(K);
	}
	for (int i = 0; i < v.size(); i++)
	{
		N = is_N_number(v[i]);
		if (N < 0)
		{
			printf("No\n");
		}
		else
		{
			NK = N * pow(v[i], 2);
			printf("%d %d\n", N, NK);
		}
	}

	return 0;
}