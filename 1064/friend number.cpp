
#include<cstdio>
#include<set>
#include<string>
#include<iostream>
using namespace std;

int N, x, sum;
set<int> se;
string s;

int main() {
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
	{
		sum = 0;
		scanf_s("%d", &x);
		s = to_string(x);
		for (int j = 0; j < s.length(); j++)
		{
			sum += s[j] - '0';
		}
		se.insert(sum);
	}

	printf("%d\n", se.size());
	set<int>::iterator it;
	for (it = se.begin(); it != se.end(); it++) {
		if (it==se.begin())
		{
			cout << *it;
		}
		else
		{
			cout << " " << *it;
		}
	}
	return 0;
}