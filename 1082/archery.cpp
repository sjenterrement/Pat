//20/20
#include<string>
#include<iostream>
#include<cmath>
using namespace std;

string id;
int n, x, y, d;
string max_id, min_id;

int main() {
	cin >> n;
	int max = 20000, min = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> id >> x >> y;
		d = pow(abs(x), 2) + pow(abs(y), 2);
		if (d<max)
		{
			max_id = id;
			max = d;
		}
		if (d>min)
		{
			min_id = id;
			min = d;
		}
	}

	cout << max_id << " " << min_id;

	return 0;
}