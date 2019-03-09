/*//grade:22
#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>v1, v2;
	int n;
	while (cin >> n)
	{
		v1.push_back(n);
	}


	for (int i = 0; i < v1.size(); i += 2)
	{
		if (v1[i] == 0 && v1[i + 1] == 0)
		{
			v2.push_back(0);
			v2.push_back(0);
		}
		else if (v1[i] != 0 && v1[i + 1] == 0)
		{
			break;
		}
		else if (v1[i] == 0 && v1[i + 1] != 0)
		{
			break;
		}
		else
		{
			int a, b;
			a = v1[i] * v1[i + 1];
			v2.push_back(a);
			b = v1[i + 1] - 1;
			v2.push_back(b);
		}

	}

	for (int i = 0; i < v2.size(); i++)
	{
		if (i != 0)
		{
			cout << " " << v2[i];
		}
		else
		{
			cout << v2[0];
		}
	}
	return 0;
}*/

#include<iostream>
using namespace std;
int main() {
	int a, b, flag = 0;
	while (cin >> a >> b) {
		if (b != 0) {
			if (flag)
				cout << " ";
			cout << a * b << " " << b - 1;
			flag = 1;
		}
	}

	if (flag==0)
		cout << "0 0";

	return 0;
}