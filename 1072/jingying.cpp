
//20/20
#include<cstdio>
#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

struct  user
{
	string name;
	vector<string> vg;
};

int	N, M;
vector<string> v;
vector<user> vu;
string name;
string id;
int num;

int main() {
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> name;
		v.push_back(name);
	}

	vector<string>::iterator it;
	for (int i = 0; i < N; i++)
	{
		int flag = 0;
		cin >> name >> num;
		user u;
		for (int i = 0; i < num; i++)
		{
			cin >> id;
			it = find(v.begin(), v.end(), id);
			if (it != v.end())
			{
				flag = 1;
				u.name = name;
				u.vg.push_back(id);

			}
		}
		if (flag)
		{
			vu.push_back(u);
		}
	}

	int count = 0;

	for (int i = 0; i < vu.size(); i++)
	{
		cout << vu[i].name << ": ";
		for (int j = 0; j < vu[i].vg.size(); j++)
		{
			if (j == 0)
			{
				cout << vu[i].vg[j];
				count++;
			}
			else
			{
				cout << " " << vu[i].vg[j];
				count++;
			}
		}
		cout << endl;
	}

	cout << vu.size() << " " << count;

	return 0;
}