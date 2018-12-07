#include<iostream>
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

