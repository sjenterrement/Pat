//14/20
#include<cstdio>
#include<vector>
#include<string>
#include<iostream>
using namespace std;

struct competitor
{
	int ranking;
	string ID;
	bool flag = false;
}cptt;

int N, K;
vector<competitor> v;
vector<string> sv;

bool is_prime(int num) {
	if (num == 1 || num == 0)
	{
		return false;
	}
	if (num == 2)
	{
		return true;
	}
	int temp = (int)sqrt((double)num);
	for (int i = 2; i <= temp; i++)
	{
		if (num%i == 0)
		{
			return false;
		}
	}
	return true;
}

int main() {
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
	{
		cin >> cptt.ID;
		cptt.ranking = i + 1;
		v.push_back(cptt);
	}
	scanf_s("%d", &K);
	for (int i = 0; i < K; i++)
	{
		string s;
		cin >> s;
		sv.push_back(s);
	}
	for (int i = 0; i < K; i++)
	{
		bool exit = true;
		for (int j = 0; j < N; j++)
		{
			if (sv[i] == v[j].ID)
			{
				exit = false;
				if (v[j].flag)
				{
					cout << v[j].ID << ": Checked" << endl;
					break;
				}
				else if (v[j].ranking == 1)
				{
					cout << v[j].ID << ": Mystery Award" << endl;
					v[j].flag = true;
					break;
				}
				else if (is_prime(v[j].ranking))
				{
					cout << v[j].ID << ": Minion" << endl;
					v[j].flag = true;
					break;
				}
				else
				{
					cout << v[j].ID << ": Chocolate" << endl;
					v[j].flag = true;
					break;
				}
			}
		}
		if (exit)
		{
			cout << sv[i] << ": Are you kidding?" << endl;
		}
	}

	return 0;
}