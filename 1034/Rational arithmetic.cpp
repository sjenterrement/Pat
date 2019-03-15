/*
//14/20..sad
#include<cstdio>
#include<string>
#include<cmath>
#include<iostream>
using namespace std;

struct number
{
	long up;
	long down;
}a, b;

number my_format(number n) {
	number m;
	int fc;
	if (n.up == 0)
	{
		return n;
	}
	int maxn = abs(n.up) < n.down ? abs(n.up) : n.down;
	for (int i = 1; i <= maxn; i++)
	{
		if (n.up%i==0&&n.down%i==0)
		{
			fc = i;
		}
	}
	m.up = n.up/fc;
	m.down = n.down/fc;
	return m;
}

string my_print(number n) {
	string s;
	if (abs(n.up) < n.down)
	{
		if (n.up == 0)
		{
			s = "0";
		}
		else if (n.up < 0)
		{
			s = "(" + to_string(n.up) + "/" + to_string(n.down) + ")";
		}
		else
		{
			s = to_string(n.up) + "/" + to_string(n.down);
		}

	}
	else if (n.up == 0 && n.down == 0)
	{
		s = "Inf";
	}
	else if ((n.up%n.down) == 0)
	{
		if (n.up > 0)
		{
			s = to_string(n.up / n.down);
		}
		else
		{
			s = "(" + to_string(n.up / n.down) + ")";
		}

	}
	else
	{
		if (n.up < 0)
		{
			s = "(" + to_string(n.up / n.down) + " " + to_string(abs(n.up%n.down)) + "/" + to_string(n.down) + ")";
		}
		else
		{
			s = to_string(n.up / n.down) + " " + to_string(abs(n.up%n.down)) + "/" + to_string(n.down);
		}
	}
	return s;
}

number my_sum(number n1, number n2) {
	number n;
	n.up = n1.up*n2.down + n2.up*n1.down;
	n.down = n1.down*n2.down;
	return n;
}

number my_sub(number n1, number n2) {
	number n;
	n.up = n1.up*n2.down - n2.up*n1.down;
	n.down = n1.down*n2.down;
	return n;
}

number my_mul(number n1, number n2) {
	number n;
	if (n1.up == 0 || n2.up == 0)
	{
		n.up = 0;
		n.down = n1.down*n2.down;
	}
	else
	{
		n.up = n1.up*n2.up;
		n.down = n1.down*n2.down;
	}
	return n;
}

number my_div(number n1, number n2) {
	number n;
	if (n2.up == 0)
	{
		n.up = 0;
		n.down = 0;
	}
	else if (n1.up == 0)
	{
		n.up = 0;
		n.down = n1.down*n2.up;
	}
	else
	{
		if (n2.up < 0)
		{
			n2.up = abs(n2.up);
			n2.down = -n2.down;
		}
		n.up = n1.up*n2.down;
		n.down = n1.down*n2.up;
	}
	return n;

}

int main() {
	scanf_s("%ld/%ld", &a.up, &a.down);
	scanf_s("%ld/%ld", &b.up, &b.down);
	string r1 = my_print(my_format(my_sum(a, b)));
	string r2 = my_print(my_format(my_sub(a, b)));
	string r3 = my_print(my_format(my_mul(a, b)));
	string r4 = my_print(my_format(my_div(a, b)));
	cout << my_print(my_format(a)) << " + " << my_print(my_format(b)) << " = " << r1 << endl;
	cout << my_print(my_format(a)) << " - " << my_print(my_format(b)) << " = " << r2 << endl;
	cout << my_print(my_format(a)) << " * " << my_print(my_format(b)) << " = " << r3 << endl;
	cout << my_print(my_format(a)) << " / " << my_print(my_format(b)) << " = " << r4;
	//cout << my_print(my_format(a));
	return 0;
}*/
#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
long long a, b, c, d;
long long gcd(long t1, long t2) {
	return t2 = 0 ? t1 : gcd(t2, t1%t2);
}

void func(long long m,long long n) {
	if (m*n == 0) {
		printf("%s", n == 0 ? "Inf" : "0");
		return;
	}
	bool flag = ((m < 0 && n>0) || (m > 0 && n < 0));
	m = abs(m); n = abs(n);
	long long x = m / n;
	printf("%s", flag ? "(-":"");
	if (m%n == 0)
		printf("%lld", x);
	if (m%n == 0) {
		if (flag)
			printf(")");
		return;
	}
	if (x != 0)
		printf(" ");
	m = m - x* n;
	long long t = gcd(m, n);
	m = m / t; n = n / t;
	printf("%lld%lld%s", m, n, flag ? ")" : "");
}
int main() {
	scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
	func(a, b); printf("+"); func(c, d); printf("="); func(a*d + b * c, b*d); printf("\n");
	func(a, b); printf("-"); func(c, d); printf("="); func(a*d - b * c, b*d); printf("\n");
	func(a, b); printf("*"); func(c, d); printf("="); func(a*c, b*d); printf("\n");
	func(a, b); printf("/"); func(c, d); printf("="); func(a*d, b*c);
	return 0;
}