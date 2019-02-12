//15/5!!
#include<cstdio>
#include<string>
#include<vector>
#include<iostream>
using namespace std;

int q[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
int n;
vector<string> v;

char code(int x) {
	switch (x)
	{
	case 0:
		return '1';
	case 1:
		return '0';
	case 2:
		return 'X';
	case 3:
		return '9';
	case 4:
		return '8';
	case 5:
		return '7';
	case 6:
		return '6';
	case 7:
		return '5';
	case 8:
		return '4';
	case 9:
		return '3';
	case 10:
		return '2';
	}
}

int main() {
	string a;
	scanf_s("%d", &n);
	while (n--)
	{
		cin >> a;
		int ans = 0;
		int flag = 0;
		for (int i = 0; i < 18; i++)
		{

			if (i < 17)
			{
				if (isalpha(a[i]))
				{
					v.push_back(a);
					flag = 1;
					break;
				}
				else
				{
					ans += q[i] * (a[i] - '0');

				}
			}
		}
		if ((code((ans % 11)) != a[17])&&flag==0)
		{
			v.push_back(a);
		}
	}

	if (v.size() == 0)
	{
		printf("All passed");
	}
	else
	{
		for (int i = 0; i < v.size(); i++)
		{
			if (i == v.size() - 1)
			{
				cout << v[i];
			}
			else
			{
				cout << v[i] << endl;
			}

		}
	}
	return 0;
}
