//16/20...sad
#include<cstdio>
#include<string>
#include<sstream>
#include<iostream>
#include<vector>
using namespace std;

string m = "jan,feb,mar,apr,may,jun,jly,aug,sep,oct,nov,dec";
vector<string> v;

string to_mars2(int x) {
	switch (x)
	{
	case 0:return "tret";
	case 1:return "jan";
	case 2:return "feb";
	case 3:return "mar";
	case 4:return "apr";
	case 5:return "may";
	case 6:return "jun";
	case 7:return "jly";
	case 8:return "aug";
	case 9:return "sep";
	case 10:return "oct";
	case 11:return "nov";
	case 12:return "dec";
	}
}

string to_mars1(int x) {
	switch (x)
	{
	case 0:return "tret";
	case 1:return "tam";
	case 2:return "hel";
	case 3:return "maa";
	case 4:return "huh";
	case 5:return "tou";
	case 6:return "kes";
	case 7:return "hei";
	case 8:return "elo";
	case 9:return "syy";
	case 10:return "lok";
	case 11:return "mer";
	case 12:return "jou";
	}
}

int to_earth1(string s) {
	if (s == "tam")
		return 1;
	else if (s == "hel")
		return 2;
	else if (s == "maa")
		return 3;
	else if (s == "huh")
		return 4;
	else if (s == "tou")
		return 5;
	else if (s == "kes")
		return 6;
	else if (s == "hei")
		return 7;
	else if (s == "elo")
		return 8;
	else if (s == "syy")
		return 9;
	else if (s == "lok")
		return 10;
	else if (s == "mer")
		return 11;
	else if (s == "jou")
		return 12;
}

int to_earth2(string s) {
	if (s == "tret")
		return 0;
	else if (s == "jan")
		return 1;
	else if (s == "feb")
		return 2;
	else if (s == "mar")
		return 3;
	else if (s == "apr")
		return 4;
	else if (s == "may")
		return 5;
	else if (s == "jun")
		return 6;
	else if (s == "jly")
		return 7;
	else if (s == "aug")
		return 8;
	else if (s == "sep")
		return 9;
	else if (s == "oct")
		return 10;
	else if (s == "nov")
		return 11;
	else if (s == "dec")
		return 12;
}

int main() {
	int n, x, x1, x2;
	string s, s1, s2;
	cin >> n;
	cin.ignore();
	while (n--)
	{
		getline(cin, s);
		v.push_back(s);
	}

	//		cout << s;
	for (int i = 0; i < v.size(); i++)
	{
		if (isalpha(v[i][0]))
		{
			if (v[i] == "tret")
			{
				cout << 0 << endl;
			}
			else if (v[i].length() > 4)
			{
				s1 = v[i].substr(0, 3);
				s2 = v[i].substr(4, 4);
				//cout << s1 << endl << s2;
				cout << to_earth1(s1) * 13 + to_earth2(s2) << endl;
			}
			else
			{
				string::size_type idx;
				idx = m.find(v[i]);
				if (idx==string::npos)
				{
					cout << to_earth1(v[i])*13 << endl;
				}
				else
				{
					cout << to_earth2(v[i])<< endl;
				}
			}
		}
		else
		{
			stringstream ss;
			ss << v[i];
			ss >> x;
			x1 = x / 13;
			x2 = x % 13;
			if (x1 == 0)
			{
				cout << to_mars2(x2) << endl;
			}
			else
			{
				if (x2 == 0)
				{
					cout << to_mars1(x1) << endl;
				}
				else {
					cout << to_mars1(x1) << " " << to_mars2(x2) << endl;
				}

			}
		}
	}
	return 0;
}