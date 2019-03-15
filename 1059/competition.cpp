/*//14/20
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
}*/

#include<iostream>
#include<set>
#include<cmath>
using namespace std;
int ran[10000];
bool isprime(int a) {
	if (a <= 1) return false;
	int Sqrt = sqrt((double)a);
	for (int i = 2; i <= Sqrt; i++) {
		if (a%i == 0)
			return false;
	}
	return true;
}
int main() {
	int n, k;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		int id;
		scanf_s("%d", &id);
		ran[id] = i + 1;
	}
	scanf_s("%d", &k);
	set<int> ss;
	for (int i = 0; i < k; i++) {
		int id;
		scanf_s("%d", &id);
		printf("%04: ", id);
		if (ran[id] == 0) {
			printf("Are you kidding?\n");
			continue;
		}
		if (ss.find(id) == ss.end()) {
			ss.insert(id);
		}
		else {
			printf("Checked\n");
			continue;
		}
		if (ran[id] == 1) {
			printf("Mystery Award\n");
		}
		else if (isprime(ran[id])) {
			printf("Minion\n");
		}
		else {
			printf("Chocolate\n");
		}
	}
	return 0;
}