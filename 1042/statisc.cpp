//20/20
#include<cstdio>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

string s;
int n[128] = { 0 };

struct cha
{
	char c;
	int num;
}chr;

int main() {
	getline(cin, s);
	sort(s.begin(),s.end());
	int count;
	int max = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (isalpha(s[i]))
		{
			if (isupper(s[i]))
			{
				s[i] = tolower(s[i]);
			}
			count = ++n[s[i]];
			if (max < count)
			{
				max = count;
				chr.c = s[i];
				chr.num = max;
			}
		}
	}
	printf("%c %d", chr.c, chr.num);
	return 0;
}