//14/20
#include<cstdio>
#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

string pw, s;
int n;
vector<string> v, v1;

int main() {

	cin >> pw >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> s;
		v.push_back(s);
	}

	char ch;
	int count=0,flag=0;
	while ((ch = getchar()) != '#')
	{
		break;
	}

	for (int i = 0; i < n; i++)
	{
		if (v[i] != pw)
		{
			cout << "Wrong password: " << v[i] << endl;
			count++;
		}
		else
		{
			flag = 1;
			break;
		}
	}

	
	if (flag)
	{
		cout << "Welcome in";
	}
	else if(count>=n)
	{
		cout << "Account locked";
	}

	return 0;
}