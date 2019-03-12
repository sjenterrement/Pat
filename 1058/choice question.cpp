/*//20/20
#include<cstdio>
#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int n, m;
char ch;
int num;
int a[1000 + 5];

struct question
{
	int code;
	int grade;
	int option;
	int number;
	string answer;
}qe;

vector<question> v;

int main() {
	scanf_s("%d%d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		question q;
		scanf_s("%d%d%d", &q.grade, &q.option, &q.number);
		q.code = i + 1;
		for (int i = 0; i < q.number; i++)
		{
			cin >> ch;
			q.answer.push_back(ch);
		}
		v.push_back(q);
	}
	vector<int> vg;
	for (int i = 0; i < n; i++)
	{
		int g = 0;

		for (int j = 0; j < m; j++)
		{
			string s;
			getchar();
			if (j != 0)
			{
				scanf_s(" ");
			}
			scanf_s("(%d", &num);
			//cin >> num;
			for (int k = 0; k < num; k++)
			{
				scanf_s(" %c", &ch);
				s.push_back(ch);
			}
			scanf_s(")");
			if (num != v[j].number)
			{
				//v[j].count++;
				a[v[j].code]++;
			}
			else
			{
				string::size_type idx;
				idx = v[j].answer.find(s);
				if (idx == string::npos)
				{
					//v[j].count++;
					a[v[j].code]++;
				}
				else
				{
					g += v[j].grade;
				}
			}
		}
		vg.push_back(g);
	}



	for (int i = 0; i < vg.size(); i++)
	{
		printf("%d\n", vg[i]);
	}

	int max = a[max_element(a, a + m) - a];

	if (max == 0)
	{
		printf("Too simple");
	}
	else
	{
		printf("%d", max);
		for (int i = 0; i < m+1; i++)
		{
			if (a[i] == max)
			{
				printf(" %d", i);
			}
		}
	}

	return 0;
}*/
#include<cstdio>
#include<vector>
#include<iostream>
#include<set>
using namespace std;
int main() {
	int n, m, temp, k;
	scanf_s("%d%d", &n, &m);
	vector<set<char>> right(m);
	vector<int> total(m), wrongCnt(m);
	for (int i = 0; i < m; i++) {
		scanf_s("%d%d%d", &total[i], &temp, &k);
		for (int j = 0; j < k; j++) {
			char c;
			cin >> c;
			right[i].insert(c);
		}
	}
	for (int i = 0; i < n; i++) {
		int score = 0;
		scanf_s("\n");
		for (int j = 0; j < m; j++) {
			if (j != 0) scanf_s(" ");
			scanf_s("(%d", &k);
			set<char> st;
			char c;
			for (int l = 0; l < k; l++) {
				cin >> c;
				st.insert(c);
			}
			scanf_s(")");
			if (st == right[j]) {
				score += total[j];
			}
			else {
				wrongCnt[j]++;
			}
		}
		printf("%d\n", score);
	}
	int maxWrongCnt = 0;
	for (int i = 0; i < m; i++) {
		if (wrongCnt[i] > maxWrongCnt) {
			maxWrongCnt = wrongCnt[i];
		}
	}
	if (maxWrongCnt == 0)
		printf("Too simple");
	else {
		printf("%d", maxWrongCnt);
		for (int i = 0; i < m; i++) {
			if (wrongCnt[i] == maxWrongCnt) {
				printf(" %d", i + 1);
			}
		}
	}

	return 0;
}