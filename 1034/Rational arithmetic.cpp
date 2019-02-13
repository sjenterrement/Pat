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
}