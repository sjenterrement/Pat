/*//grade:22/25
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
}*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n;
	long long p;
	scanf_s("%d%lld", &n, &p);
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int result = 0, temp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + result; j < n; j++) {
			if (v[j] <= v[i] * p) {
				temp = j - i + 1;
				if (temp > result)
					result = temp;
			}
			else {
				break;
			}
		}
	}
	cout << result;
	return 0;
}
