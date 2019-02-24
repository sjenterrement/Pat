//20/20
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main() {
	int ans = 0, temp, count_0 = 0, count_1 = 0;
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (isalpha(s[i]))
		{
			char ch=tolower(s[i]);
			ans += ch - 'a' + 1;
		}
	}

	temp = ans;
	while (temp>0)
	{
		if (temp%2==1)
		{
			count_1++;
		}
		else if(temp%2==0)
		{
			count_0++;
		}
		temp = temp / 2;
	}

	cout << count_0<<" "<<count_1;

	return 0;
}