//题理解偏了
#include<cstdio>
#include<algorithm>
#define MAXN 10001
using namespace std;
int n, a[MAXN];
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	sort(a, a + n);

	int ans = a[0];
	for (int i = 1; i < n; i++) {
		ans = (ans + a[i]) / 2;
	}

	printf("%d\n", ans);
}