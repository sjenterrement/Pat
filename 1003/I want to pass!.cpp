/*#include <stdio.h>
#include <string.h>
int main()
{
	char c[100];
	int i, j, n;
	int count_P, count_A, count_T, pos_P, pos_T;
	scanf_s("%d\n", &n);
	for (i = 0; i < n; i++)
	{
		gets_s(c);
		count_P = 0;
		count_A = 0;
		count_T = 0;
		pos_P = 0;
		pos_T = 0;
		for (j = 0; j < strlen(c); j++)
		{
			if (c[j] == 'P')
			{
				count_P++;
				pos_P = j;
			}
			if (c[j] == 'A')
				count_A++;
			if (c[j] == 'T')
			{
				count_T++;
				pos_T = j;
			}
		}
		if (count_P + count_A + count_T != strlen(c) || pos_T - pos_P <= 1 || count_T > 1 || pos_P * (pos_T - pos_P - 1) != strlen(c) - pos_T - 1)
			printf("NO\n");
		else
			printf("YES\n");
	}
}

*/
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	int n, p, t;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		map<char, int> m;
		for (int j = 0; j < s.length(); j++) {
			m[s[j]]++;
			if (s[j] == 'P') p = j;
			if (s[j] == 'T') t = j;
		}
		if (m['P'] == 1 && m['A'] != 0 && m['T'] == 1 && m.size() == 3 && t - p != 1 && p*(t - p - 1) == s.length() - t - 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}