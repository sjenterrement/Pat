//15/20
#include<cstdio>
#include<iostream>
using namespace std;

int n;
int main() {
	scanf_s("%d", &n);
	double sum = 0.0, temp;
	for (int i = 1; i <= n; i++)
	{
		cin >> temp;
		sum += temp * i*(n - i - 1);
	}

	printf("%.2f", sum);

	return 0;
}