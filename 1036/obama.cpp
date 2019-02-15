//15/15!!
#include<cstdio>
#include<iostream>
using namespace std;

char ch;
int n, colum;

int main() {
	scanf_s("%d", &n);
	cin >> ch;
	colum = int(n / 2.0 + 0.5) - 2;
	for (int i = 0; i < n; i++)
	{
		printf("%c", ch);
	}
	for (int i = 0; i < colum; i++)
	{
		printf("\n");
		for (int i = 0; i < n; i++)
		{
			if (i == 0 || i == n - 1)
			{
				printf("%c", ch);
			}
			else
			{
				printf(" ");
			}
		}
	}
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("%c", ch);
	}

	return 0;
}