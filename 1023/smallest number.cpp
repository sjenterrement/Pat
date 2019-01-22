#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	vector<char>v1;
	vector<int>v;
	string str;
	getline(cin, str);
	char temp;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
		{
			v1.push_back(str[i]);
		}
	}

	int k = 0;

	for (int i = 0; i < v1.size(); i++)
	{
		for (int i = 0; i < v1[i]-48; i++)
		{
			v.push_back(k);
		}
		k++;
	}

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] != '0')
		{
			temp = v[0];
			v[0] = v[i];
			v[i] = temp;
			break;
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}
	return 0;
}