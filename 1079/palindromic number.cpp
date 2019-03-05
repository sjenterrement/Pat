//14/20
#include<cstdio>
#include<string>
#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;

bool is_pn(string s) {
	if (s[0]=='0')
	{
		return true;
	}
	for (size_t i = 0; i < s.length()/2; i++)
	{
		if (s[i]!=s[s.length()-1-i]){
		
			return false;
		}
	}
	return true;
}

int main() {
	string s;
	cin >> s;
	int n = 10;
	int flag = 1;
	for (size_t i = 0; i < n; i++)
	{
		string temp = s;
		stringstream ss1,ss2;
		int x1, x2;
		ss1 << temp;
		ss1 >> x1;
		reverse(s.begin(), s.end());
		ss2 << s;
		ss2 >> x2;
		cout << x1 << " + " << s << " = " << x1 + x2<<endl;
		s = to_string(x1 + x2);
		if (is_pn(s))
		{
			flag = 0;
			cout << x1 + x2 << " is a palindromic number.";
			break;
		}
	}
	if (flag)
	{
		cout << "Not found in 10 iterations.";
	}

	return 0;
}