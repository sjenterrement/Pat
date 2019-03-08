//20/20
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn=1000 + 2;
int a[maxn] = { 0 };
int N, M, k;

int main() {
	cin >> N >> M;
	int id;
	for (int i = 0; i < M; i++)
	{
		for (int i = 0; i < N; i++)
		{
			cin >> k;
			id = i + 1;
			a[id] += k;
		}
	}

	int max = a[max_element(a+1, a + N+1)-a];
	cout << max << endl;
	int flag = 1;
	for (int i = 1; i <= N; i++)
	{
		if (a[i]==max)
		{
			if (flag)
			{
				cout << i;
				flag = 0;
			}
			else
			{
				cout << " " << i;
			}
		}
	}

	return 0;
}