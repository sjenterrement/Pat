//20/20
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

int x, y;

int main() {
	scanf("%d%d", &x, &y);
	if (!x || !y)
	{
		cout << 0;
	}
	else {
		int z = x * y;
		string s = to_string(z);
		reverse(s.begin(), s.end());
		int flag = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] != '0'&&!flag)
			{
				flag = 1;
				cout << s[i];
			}
			else if(flag)
			{
				cout << s[i];
			}
		}
	}

	return 0;
}