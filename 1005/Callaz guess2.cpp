/*#include<iostream>
#include<algorithm>
using namespace std;
bool visit[105] = { false };
int main() {
	int n, num[105], number;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		number = num[i];
		if (visit[number] == false) {
			while (number != 1)
			{
				if (number % 2 == 0)
				{
					number = number / 2;
				}
				else
				{
					number = (number * 3 + 1) / 2;
				}
				if (number < 100)
				{
					visit[number] = true;
				}
			}
		}

	}
	int cnt = 1;
	sort(num, num + n);
	for (int i = n - 1; i >= 0; i--)
	{
		if (visit[num[i]] == false)
		{
			if (cnt != 1)
			{
				cout << " ";
			}
			cout << num[i];
			cnt++;
		}
	}
	cout << endl;
}*/
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a,int b) {
	return a > b;
}

int main() {
	int k, n, flag = 0;
	int hash[10000] = { 0 };
	cin >> k;
	vector<int> v(k);
	for (int i = 0; i < k; i++) {
		cin >> n;
		v[i] = n;
		while (n != 1) {
			if (n % 2 != 0)
				n = 3 * n + 1;
			n = n / 2;
			if (hash[n] == 1) break;
			hash[n] = 1;
		}
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++) {
		if (hash[v[i]] == 0) {
			if (flag == 1) cout << " ";
			cout << v[i];
			flag = 1;
		}
	}
	return 0;
}*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(int a, int b) { return a > b; }
int main() {
	int n, k, hash[10000], flag = 0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> k;
		v[i] = k;
		while (k != 1) {
			if (k % 2 != 0) k = k * 3 + 1;
			k = k / 2;
			if (hash[k] == 1) break;
			hash[k] = 1;
		}
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++) {
		if (hash[v[i]] == 0) {
			if (flag == 1) cout << " ";
			cout << v[i];
			flag = 1;
		}
	}
	return 0;
}
