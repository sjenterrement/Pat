//grade:22/25
//注意：int类型取值8位
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 100000 + 5;
int p;
long long n, a[maxn];

int main() {
	scanf_s("%d%d", &n, &p);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	sort(a, a + n);
	int count = 0, result = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[j] <= a[i] * p)
			{
				count++;
			}
			if (count > result)
			{
				result = count;
			}
		}

		count = 0;

	}
	printf("%d", result);
	return 0;
}