/*
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
}*/
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main() {
	int n = 0, cnt = 0;
	char a[50], b[50];
	double temp, sum = 0.0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		sscanf_s(a, "%lf", &temp);
		sprintf_s(b, "%.2f", temp);
		int flag = 0;
		for (int j = 0; j < strlen(a); j++)
			if (a[j] != b[j]) flag = 1;
		if (flag || temp < -1000 || temp>1000) {
			printf("ERROR: %s is not a legal number\n", a);
			continue;
		}
		else {
			sum += temp;
			cnt++;
		}
	}
	if (cnt == 1)
		printf("The average of 1 number is %.2f", sum);
	else if (cnt > 1)
		printf("The average of %d numbers is %.2f", cnt, sum / cnt);
	else
		printf("The average of 0 number is Undefined");
	return 0;
}
