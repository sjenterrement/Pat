//13/15..15/15
#include<cstdio>
#include<cmath>
#define bor 0.01
using namespace std;

int main() {
	double r1, p1, r2, p2;
	double a, b;
	scanf_s("%lf%lf%lf%lf", &r1, &p1, &r2, &p2);
	a = r1 * r2*cos(p1 + p2);
	b = r1 * r2*sin(p1 + p2);
	if (abs(a)<bor)
	{
		a = 0;
	}
	if (abs(b)<bor)
	{
		b = 0;
	}
	if (b<0)
	{
		printf("%.2f%.2fi", a, b);
	}
	else
	{
		printf("%.2f+%.2fi", a, b);
	}
	return 0;
}