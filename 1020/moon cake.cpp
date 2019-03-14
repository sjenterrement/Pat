/*#include<iostream>
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
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct mooncake{
	float mount, price, unit;
};
int cmp(mooncake a,mooncake b) {
	return a.unit > b.unit;
}
int main() {
	int n, need;
	cin >> n >> need;
	vector<mooncake> a(n);
	for (int i = 0; i < n; i++) cin >> a[i].mount;
	for (int i = 0; i < n; i++) cin >> a[i].price;
	for (int i = 0; i < n; i++) a[i].unit = a[i].price / a[i].mount;
	sort(a.begin(), a.end(), cmp);
	float result = 0.0;
	for (int i = 0; i < n; i++) {
		if (a[i].mount <= need) {
			result = result + a[i].price;
		}
		else {
			result = result + a[i].unit*need;
			break;
		}
		need -= a[i].mount;
	}
	printf("%.2f", result);
	return 0;
}
