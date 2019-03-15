/*#include<cstdio>
using namespace std;
double a, b, c, d, e;
double a1, a2, a3;

int Gcd(int  a, int b) {
	return a % b == 0 ? b : Gcd(b, a%b);
}

int main() {
	scanf("%lf/%lf", &a, &b); a1 = a / b;
	scanf("%lf/%lf", &c, &d); a2 = c / d;
	if (a1 > a2) {
		double temp = a1;
		a1 = a2;
		a2 = temp;
	}

	scanf("%lf", &e);

	int flag = 1;
	for (double i = 1; i < e; i++) {
		a3 = i / e;
		if (a1 < a3&&a3 < a2) {
			if (Gcd(i, e) == 1) {
				if (flag) {
					flag = 0;
					printf("%.0f/%.0f", i, e);
				}
				else {
					printf(" %.0f/%.0f", i, e);
				}
			}

		}
	}
	printf("\n");

	return 0;
}*/
#include<iostream>
using namespace std;
int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a%b);
}
int main() {
	int n1, m1, n2, m2, k;
	scanf_s("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
	if (n1*m2 > n2*m1) {
		swap(n1, n2);
		swap(m1, m2);
	}
	int num = 1;
	bool flag = false;
	while (n1*k >= m1 * num) num++;
	while (n1*k < m1*num&&m2*num < n2*k) {
		if (gcd(num, k) == 1) {
			printf("%s%d/%d", flag == true ? " " : "", num, k);
		}
		num++;
	}
	return 0;
}