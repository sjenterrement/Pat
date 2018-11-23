//grade;19
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool is_Prime(int n) {
	if (n == 0 || n == 1)
	{
		return false;
	}
	if (n == 2)
	{
		return true;
	}
	int temp = (int)sqrt((double)n);
	for (int i = 2; i <= temp; i++)
	{
		if (n%i == 0)
		{
			return false;
		}
	}
	return true;
}

int main() {
	vector<int> v;

	int x = 1;
	int count = 0;
	int M, N;
	cin >> M >> N;

	while (1)
	{
		x++;
		if (is_Prime(x))
		{
			count++;
		}
		if (count == M)
		{
			break;
		}
	}
	v.push_back(x);
	while (1)
	{
		x++;
		if (is_Prime(x))
		{
			v.push_back(x);
			count++;
		}
		if (count == N)
		{
			break;
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (i != 0 && i % 10 != 0)
			cout << " " << v[i];
		else
			cout << v[i];
		if (i % 10 == 9)
		{
			cout << "\n";
		}

	}
	return 0;
}

