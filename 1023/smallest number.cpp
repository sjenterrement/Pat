#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<int> v(10);
	for (int i = 0; i < 10; i++)
	{
		cin >> v[i];
	}
	if (v[0] != 0)
	{
		int j;
		for (j = 1; j < 10 && v[j] == 0; j++);
		cout << j;
		v[j]--;
	}
	for (int i = 0; i < 10; i++)
	{
		while (v[i] != 0)
		{
			cout << i;
			v[i]--;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
