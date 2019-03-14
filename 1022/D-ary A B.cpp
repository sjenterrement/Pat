/*#include<iostream>
#include<vector>
using namespace std;

int main() {
	int A, B, D;
	vector<int> v;
	cin >> A >> B >> D;
	int temp = A + B;
	if (temp == 0)
	{
		cout << 0;
	}
	else {
		while (temp)
		{
			v.push_back(temp%D);
			temp = temp / D;
		}

		for (int i = v.size() - 1; i >= 0; i--)
		{
			cout << v[i];
		}
	}
	return 0;
}
*/
#include<iostream>
using namespace std;
int main() {
	int a, b, d;
	cin >> a >> b >> d;
	int t = a + b;
	if (t == 0) {
		cout << 0;
		return 0;
	}
	int s[100];
	int i = 0;
	while (t != 0) {
		s[i++] = t % d;
		t = t / d;
	}
	for (int j = i - 1; i >= 0; j--) {
		cout << s[j];
	}
	return 0;
}
