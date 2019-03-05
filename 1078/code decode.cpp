//7...17/25
#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

string code(string s) {
	string str;
	int temp = 0, count;
	for (size_t i = 0; i < s.length(); i++)
	{
		if (s[i + 1] != s[i])
		{
			count = (i - temp) + 1;
			if (count != 1)
			{
				str += count + '0';
			}
			str += s[i];
			temp = i + 1;
		}
	}
	return str;
}

string decode(string s) {
	string str="";
	int temp = 0, count = 0;
	for (size_t i = 0; i < s.length(); i++)
	{
		if (('0' <= s[i]) && ('9' >= s[i]))
		{
			count = count * 10 + s[i] - '0';

		}
		else
		{
			if (count == 0)
			{
				str += s[i];
			}
			else
			{
				while (count--)
				{
					str += s[i];
				}
				count = 0;
			}
		}
	}
	return str;
}

int main() {
	string s;
	char ch;
	cin >> ch;
	cin.ignore();
	getline(cin, s);
	if (ch == 'C')
	{
		if (code(s).length() == 0)
		{
			cout << s;
		}
		else {
			cout << code(s);
		}
	}
	else {
		cout << decode(s);
	}

	return 0;
}