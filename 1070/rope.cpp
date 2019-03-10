//题理解偏了
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int n;
int main()
{
	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	sort(a.begin(),a.end());

	int ans = a[0];
	for (int i = 1; i < n; i++) {
		ans = (ans + a[i]) / 2;
	}

	printf("%d\n", ans);
}