/*//grade:20!!
#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main() {
	string s1, s2,s;
	char ch;
	cin >> s1 >> s2;
	int l1 = s1.length();
	string::size_type idx1,idx2;
	for (int i = 0; i < l1; i++)
	{
		idx1 = s2.find(s1[i]);
		if (idx1==string::npos)
		{
			if (isalpha(s1[i]))
			{
				ch = toupper(s1[i]);
				idx2 = s.find(ch);
				if (idx2==string::npos)
				{
					printf("%c", ch);
				}
				s += ch;
				continue;
			}
			idx2 = s.find(s1[i]);
			if (idx2 == string::npos)
			{
				cout << s1[i];
			}
			s += s1[i];
		}
	}
	return 0;
}*/
#include<iostream>
#include<string>
using namespace std;
int main() {
	string s1, s2, ans;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.length(); i++) {
		if (s2.find(s1[i]) == string::npos&&ans.find(toupper(s1[i])) == string::npos)
			ans += toupper(s1[i]);
	}
	cout << ans;
	return 0;
}