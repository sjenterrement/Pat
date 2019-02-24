//17/20
#include<cstdio>
#include<string>
#include<iostream>
#include<sstream>
using namespace std;

int main() {
	double a, ans = 0;
	int N, count = 0;
	scanf_s("%d", &N);
	string s;
	while (N--)
	{
		cin >> s;
		if (isalpha(s[0]))
		{
			cout << "ERROR: " << s << " is not a legal number" << endl;
		}
		else
		{
			stringstream ss;
			ss << s;
			ss >> a;
			string::size_type idx;
			idx = to_string(a).find(s);
			if (idx == string::npos)
			{
				cout << "ERROR: " << s << " is not a legal number" << endl;
			}
			else if (a <= -1000 || a >= 1000)
			{
				cout << "ERROR: " << a << " is not a legal number" << endl;
			}
			else if (a * 100 != int(a * 100))
			{
				cout << "ERROR: " << a << " is not a legal number" << endl;
			}
			else
			{
				count++;
				ans += a;
			}
		}
	}

	if (count == 0)
	{
		printf("The average of %d numbers is Undefined", count);
	}
	else if (count==1)
	{
		printf("The average of %d number is %.2f", count, ans / count);
	}
	else
	{
		printf("The average of %d numbers is %.2f", count, ans / count);
	}

	return 0;
}