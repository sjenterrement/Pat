/*#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[100000 + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int ans = 0;
	int i;
	if (a[0] > n) {
		cout << n << endl;
	}
	else {
		for (i = n - 1; i >= 0; i--) {
			if (a[i] <= n - i) {
				ans = n - i - 1;
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}*/
#include<iostream>
#include<algorithm>
using namespace std;
int a[1000000];
bool cmp1(int a, int b) {
	return a > b;
}
int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)scanf_s("%d", &a[i]);
	sort(a + 1, a + n + 1, cmp1);
	int ans = 0, p = 1;
	while (ans<n&&a[p]>p) {
		ans++;
		p++;
	}
	printf("%d", ans);
	return 0;
}