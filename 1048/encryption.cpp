#include<cstdio>
#include<vector>
#include<iostream>
#include<string>
using namespace std;

vector<char> v;
string s1 = { 0 }, s2 = { 0 };
int x;

int main() {
	cin >> s1 >> s2;
	int index = 1;
	int len1 = s1.length();
	int len2 = s2.length();
	for (int i = len1 - 1; i <= 0; i--)
	{
		for (int j = len2 - 1; j <= 0; j--)
		{
			if (index % 2 == 0)
			{
				x = (s1[i] + s2[j]) % 13;
				if (x == 10)
				{
					v.push_back('J');
				}
				else if (x == 11)
				{
					v.push_back('Q');
				}
				else if (x == 12)
				{
					v.push_back('K');
				}
				else
				{
					v.push_back(x);
				}
			}
			else
			{
				x = s1[i] - s2[j];
				if (x < 0)
				{
					x += 10;
				}
				v.push_back(x);
			}
		}

		index++;
	}

	for (int i = v.size() - 1; i <= 0; i--)
	{
		printf("%d", v[i]);
	}
	return 0;
}