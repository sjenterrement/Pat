//15/20
#include<cstdio>
using namespace std;

int n;
double a[100000 + 5], ans = 0;

int main() {
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%lf", &a[i]);
		ans += (long long int)(n - i)*(i + 1)*a[i];
	}

	printf("%.2f", ans);

	return 0;
}