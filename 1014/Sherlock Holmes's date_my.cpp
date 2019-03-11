/*//grade:20
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

string get_Day(char c) {
	string str;
	switch (c)
	{
	case 'A':str = "MON"; break;
	case 'B':str = "TUE"; break;
	case 'C':str = "WED"; break;
	case 'D':str = "THU"; break;
	case 'E':str = "FRI"; break;
	case 'F':str = "SAT"; break;
	case 'G':str = "SUN"; break;
	}
	return str;
}

string get_Hour(char c) {
	std::stringstream ss;
	std::string str;
	if (c >= '0'&&c <= '9')
	{
		int a = c - '0';
		ss << a;
		ss >> str;
		return "0" + str;
	}
	else
	{
		int b = c - 'A' + 10;
		ss << b;
		ss >> str;
		return str;
	}
}

int main() {
	string str1, str2, str3, str4;
	int len1, len2, len3, len4, temp_len, loc;
	cin >> str1 >> str2 >> str3 >> str4;
	vector<string> v;

	len1 = str1.length();
	len2 = str2.length();
	temp_len = len1 > len2 ? len2 : len1;

	for (int i = 0; i < temp_len; i++)
	{
		if (str1[i] == str2[i])
		{
			if (str1[i] >= 'A'&&str1[i] <= 'G')
			{
				v.push_back(get_Day(str1[i]));
				loc = i;
				break;
			}
		}
	}
	v.push_back(" ");

	for (int i = loc + 1; i < temp_len; i++)
	{
		if (str1[i] == str2[i])
		{
			if ((str1[i] >= '0'&&str1[i] <= '9') || (str1[i] >= 'A'&&str1[i] <= 'N'))
			{
				v.push_back(get_Hour(str1[i]));
				break;
			}
		}
	}

	v.push_back(":");

	len3 = str3.length();
	len4 = str4.length();
	temp_len = len3 > len4 ? len4 : len3;

	for (int i = 0; i < temp_len; i++)
	{
		if (str3[i] == str4[i])
		{
			if ((str3[i] >= 'a'&&str3[i] <= 'z') || (str3[i] >= 'A'&&str3[i] <= 'Z'))
			{
				stringstream ss;
				string str;
				ss << i;
				ss >> str;
				if (i <= 9)
				{

					str = "0" + str;
					v.push_back(str);
				}
				else
				{
					v.push_back(str);
				}
				break;
			}

		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}

	return 0;
}*/
#include<string>
#include<iostream>
using namespace std;
int main() {
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	char t[2];
	int pos, i = 0, j = 0;
	while (i < a.length() && i < b.length()) {
		if (a[i] == b[i] && (a[i] >= 'A'&&a[i] <= 'G')) {
			t[0] = a[i];
			break;
		}
		i++;
	}
	i = i + 1;
	while (i < a.length() && i < b.length()) {
		if (a[i] == b[i] && ((a[i] >= 'A'&&a[i] <= 'N') || isdigit(a[i]))) {
			t[1] = a[i];
			break;
		}
		i++;
	}
	while (j < c.length() && j < d.length()) {
		if (c[j] == d[j] && isalpha(c[j])) {
			pos = j;
			break;
		}
		j++;
	}
	string week[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	int m = isdigit(t[1]) ? t[1] - '0' : t[1] - 'A' + 10;
	cout << week[t[0] - 'A'];
	printf(" %02d:%02d", m, pos);
	return 0;
}