/*//19/20...
#include<iostream>
#include<string>
using namespace std;

int main() {
	string s1, s2, s;
	cin >> s1 >> s2;
	int len = s2.length();
	string::size_type idx1, idx2, idx3;
	for (int i = 0; i < len; i++)
	{
		if (isalpha(s2[i]))
		{
			idx1 = s1.find(toupper(s2[i]));
			idx2 = s1.find('+');
			if (idx1 == string::npos)
			{
				if ((isupper(s2[i])) && (idx2 == string::npos))
				{
					s += s2[i];
				}
				else if (islower(s2[i]))
				{
					s += s2[i];
				}
			}
		}
		else
		{
			idx3 = s1.find(s2[i]);
			if (idx3 == string::npos)
			{
				s += s2[i];
			}
		}
	}
	cout << s;
	return 0;
}*/
#include<iostream>
#include<string>
using namespace std;
int main() {
	string bad, should;
	getline(cin, bad);
	getline(cin, should);
	for (int i = 0, int length = should.length(); i < length; i++) {
		if (bad.find(toupper(should[i])) != string::npos) continue;
		if (isupper(should[i]) && bad.find('+') != string::npos) continue;
		cout << should[i];
	}
	return 0;
}