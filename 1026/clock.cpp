#include<time.h>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	float c1;
	float c2;
    int c;
	int const MY_CLK_TCK = 100;

	scanf_s("%f%f", &c1, &c2);
	c = (int)((c2 - c1)/100+0.5);
	printf("%02d:", c / 3600);
	printf("%02d:", (c%3600)/60);
	printf("%02d", (c % 3600)%60);
	return 0;
}