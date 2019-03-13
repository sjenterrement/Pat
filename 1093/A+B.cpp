//20/20
/*#include<unordered_set>
#include<string>;
#include<iostream>
using namespace std;

unordered_set<char> st;

int main() {
	string s1, s2, s = "";
	getline(cin, s1);
	//getchar();
	getline(cin, s2);
	for (int i = 0; i < s1.length(); i++)
	{

		if (st.find(s1[i]) == st.end())
		{
			s += s1[i];
		}
		st.insert(s1[i]);
	}
	for (int i = 0; i < s2.length(); i++)
	{
		if (st.find(s2[i]) == st.end())
		{
			s += s2[i];
		}
		st.insert(s2[i]);
	}

	cout << s;

	return 0;
}*/
#include<iostream>
#include<string>
using namespace std;
int main() {
	string s1, s2, s;
	int hash[200] = { 0 };
	getline(cin, s1);
	getline(cin, s2);
	s = s1 + s2;
	for (int i = 0; i < s.length(); i++) {
		if (hash[s[i]] == 0)
			cout << s[i];
		hash[s[i]] = 1;
	}
	return 0;
}