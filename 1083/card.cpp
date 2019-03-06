//20/20
#include<iostream>
#include<math.h>
using namespace std;
const int maxn = 100000 + 2;

int a[maxn] = { 0 }, n, x, d;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		d = abs(i - x);
		a[d]++;
	}
	int flag = 0;
	for (int i = n; i >=0; i--)
	{
		if (a[i]>=2)
		{
			if (!flag)
			{
				cout << i << " " << a[i] ;
				flag = 1;
			}
			else
			{
				cout << endl << i << " " << a[i];
			}

		}
	}

	return 0;
}
