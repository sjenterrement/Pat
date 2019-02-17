//15/15!
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct number
{
	string s;
	int f;
	int r;
}num;

int n, m, x;
vector<number> v;

int main() {
	cin >> n;
	while (n--)
	{
		cin >> num.s >> num.f >> num.r;
		v.push_back(num);
	}
	cin >> m;
	while (m--)
	{
		cin >> x;
		for (int i = 0; i < v.size(); i++)
		{
			if (x == v[i].f)
			{
				cout << v[i].s << " " << v[i].r;
			}
		}
	}
}