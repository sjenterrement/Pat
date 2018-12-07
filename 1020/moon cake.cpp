#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;

struct cake
{
	double stock;
	double totalprice;

};

bool compare(cake a, cake b) {
	return a.totalprice / a.stock > b.totalprice / b.stock;
}

int main() {
	int types, need;
	double value = 0;;
	cake c_temp;
	vector<cake> v;

	cin >> types >> need;

	for (int i = 0; i < types; i++)
	{
		cin >> c_temp.stock;
		v.push_back(c_temp);
	}
	for (int i = 0; i < types; i++)
	{
		cin >> v[i].totalprice;
	}

	sort(v.begin(), v.end(), compare);

	int i = 0;
	while (need>0&&i<v.size())
	{
		if (need<v[i].stock)
		{
			value += (double)need * (v[i].totalprice / v[i].stock);
			need = 0;
		}
		else
		{
			value += v[i].totalprice;
			need -= v[i].stock;
			i++;
		}
	}

	cout << setiosflags(ios::fixed) << setprecision(2) << value << endl;
	
	return 0;
}
