/*//17/25
#include<cstdio>
#include<vector>
#include<set>
#include <algorithm>
#include<iostream>
using namespace std;

struct couple
{
	int man;
	int women;
}c;

vector<couple> v;
set<int> s, s1;
int N, M, id, id1, id2;

int main() {
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d%d", &c.man, &c.women);
		v.push_back(c);
	}
	scanf_s("%d", &M);
	for (int i = 0; i < M; i++)
	{
		scanf_s("%d", &id);
		s.insert(id);
	}

	set<int>::iterator it1, it2;
	
	for (it1 = s.begin(); it1 != s.end(); it1++)
	{
		int flag = 1;
		for (int i = 0; i < N; i++)
		{

			if (*it1 == v[i].man)
			{
				it2 = find(s.begin(), s.end(), v[i].women);
				if (it2!=s.end())
				{
					flag = 0;
				}
			}
			if (*it1 == v[i].women)
			{
				it2 = find(s.begin(), s.end(), v[i].man);
				if (it2 != s.end())
				{
					flag = 0;
				}
			}
		}
		if (flag)
		{
			s1.insert(*it1);
		}
	}

	printf("%d\n", s1.size());
	set<int>::iterator itr;
	for (itr = s1.begin(); itr != s1.end(); itr++) {
		if (itr == s1.begin())
		{
			cout << *itr;
		}
		else
		{
			cout << " " << *itr;
		}
	}

	return 0;
}*/
#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main() {
	int n, a, b, m;
	scanf_s("%d", &n);
	vector<int> couple(100000, -1);
	for (int i = 0; i < n; i++) {
		scanf_s("%d%d", &a, &b);
		couple[a] = b;
		couple[b] = a;
	}
	scanf_s("%d", &m);
	vector<int> guess(m), isExist(100000);
	for (int i = 0; i < m; i++) {
		scanf_s("%d", &guess[i]);
		if (couple[guess[i]] != -1)
			isExist[couple[guess[i]]] = 1;
	}
	set<int> s;
	for (int i = 0; i < m; i++) {
		if (!isExist[guess[i]])
			s.insert(guess[i]);
	}
	printf("%d\n", s.size());
	for (auto it = s.begin(); it != s.end(); it++) {
		if (it != s.begin())
			printf(" ");
		printf("%05d", *it);
	}
	return 0;
}