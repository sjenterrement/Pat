#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int num;
	long int a, b, c;
	cin >> num;
	vector<int> flag(10);
	int i;
	for (i = 0; i < num; i++)
	{
		cin >> a >> b >> c;
		flag[i] = a + b > c ? 1 : 0;
	}
	for (i = 0; i < num; i++)
	{
		cout << "Case #" << i + 1 << ": ";
		if (flag[i])
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}

	return 0;
}
