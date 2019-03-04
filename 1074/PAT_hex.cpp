//15/20..�ڴ泬ʱ
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

string s, s1, s2, s3;

int main() {

	cin >> s >> s1 >> s2;
	reverse(s.begin(), s.end());
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	int d_len = fabs(s1.length() - s2.length()); 
	int len = s1.length() > s2.length() ? s1.length() : s2.length();
	for (int i = 0; i < d_len; i++)
	{
		if (s1.length() > s2.length())
		{
			s2 += '0';
		}
		else
		{
			s1 += '0';
		}
	}

	int jw=0, yw;

	for (int i = 0; i < len; i++)
	{
		int x = ((s1[i] + s2[i]) - '0' - '0') + jw;
		if (x==0)
		{
			break;
		}
		int y = s[i] - '0';
		if (y==0)
		{
			y = 10;
		}
		yw = x % y;
		s3.push_back(yw+'0');
		jw = x / y;
	}

	reverse(s3.begin(), s3.end());

	cout << s3;

	//cout << s << endl << s1 << endl << s2;
	return 0;
}