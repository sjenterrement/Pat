//15/15
#include<cstdio>
using namespace std;

int n, a, ans = 0;

int main() {
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a);
		ans += (n - 1)*(a * 10 + a);
	}

	printf("%d", ans);

	return 0;
}