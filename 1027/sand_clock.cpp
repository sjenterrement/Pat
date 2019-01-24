#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

int main() {
	int N;
	int a = 1;
	int s = 1;
	char ch;
	scanf_s("%d", &N);
	cin >> ch;
	int l = N - 1;
	if (l <= 1) {
		s = 1;
	}
	else
	{
		while (l >= 0)
		{
			s++;
			a = 2 * (2 * s - 1);
			l -= a;
		}
	}

	int m = 0;
	if (N<7)
	{
		cout << ch;
		cout << endl << N - 1;
	}
	else
	{
		s--;
		a = 1;
		int ss = s;
		for (int i = 2; i <= s; i++)
		{
			a+= 2 * (2 * i - 1);
		}
		for (int x = s; x >= -s; x--)
		{
			if (x == 0)
			{
				x -= 2;
			}
			for (int z = 0; z < s - (abs(x)); z++)
			{
				printf(" ");
			}
			for (int y = 0; y < 2 * abs(x) - 1; y++)

			{
				cout << ch;
				m++;

			}
			printf("\n");
		}
		cout << N - a;
	}
	return 0;
}