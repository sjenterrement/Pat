#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, m, i, j, g2;
vector<int>v[101];
int main()
{
	cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		int g1 = 0, x;
		cin >> g2;
		for (j = 1; j < n; j++)
		{
			cin >> x;
			if (x >= 0 && x <= m) v[i].push_back(x);
		}
		sort(v[i].begin(), v[i].end());
		for (j = 1; j < v[i].size() - 1; j++) g1 = g1 + v[i][j];
		g1 = g1 / (v[i].size() - 2);
		double t = ((double)g1 + (double)g2) / 2.0;
		if (t - (int)t >= 0.5) cout << (int)t + 1 << endl;
		else cout << (int)t << endl;
	}
	return 0;
}