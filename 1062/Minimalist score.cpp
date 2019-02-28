#include<cstdio>
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
}