#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	vector<int>v(10,int(0));
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		v[str[i] - 48]++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (v[i]!=0)
		{
			cout << i << ":" << v[i] << endl;
		}
	}
	return 0;
}