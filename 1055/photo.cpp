#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

struct node {
	string name;
	int hight;
};

bool cmp(node a, node b) {
	return a.hight != b.hight ? a.hight > b.hight:a.name < b.name;
}


int main() {
	int n, k, m;
	cin >> n >> k;
	vector<node> stu(n);
	for (int i = 0; i < n; i++) {
		cin >> stu[i].name;
		cin >> stu[i].hight;
	}

	sort(stu.begin(), stu.end(), cmp);

	int idx = 0, row = k;
	while (row) {
		if (row == k)
			m = n - n / k * (k - 1);
		else
			m = n / k;
		vector<string> ans(m);
		ans[m / 2] = stu[idx].name;
		//×ó±ß
		int j = m / 2 - 1;
		for (int i = idx + 1; i < idx + m; i = i + 2)
			ans[j--] = stu[i].name;
		//ÓÒ±ß
		j = m / 2 + 1;
		for (int i = idx + 2; i < idx + m; i = i + 2)
			ans[j++] = stu[i].name;
		//Êä³öµ±Ç°ÅÅ
		cout << ans[0];
		for (int i = 1; i < m; i++)
			cout << " " << ans[i];
		cout << endl;
		idx = idx + m;
		row--;
	}
	return 0;
}
