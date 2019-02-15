//20/20!!!!
#include<cstdio>
using namespace std;

struct coin
{
	int g;
	int s;
	int k;
}c,c1, c2;

int coin_to(coin c) {
	int x;
	x = c.g * 17 * 29 + c.k * 29 + c.s;
	return x;
}

coin to_coin(int x) {
	coin c;
	if (x > 0)
	{
		c.g = x / 29 / 17;
		c.k = (x % (29 * 17)) / 29;
		c.s = x % 29;
	}
	else
	{
		c.g = x / 29 / 17;
		c.k = -((x % (29 * 17)) / 29);
		c.s = -(x % 29);
	}
	return c;
}

int main() {
	scanf_s("%d.%d.%d", &c1.g, &c1.k, &c1.s);
	scanf_s("%d.%d.%d", &c2.g, &c2.k, &c2.s);
	c = to_coin(coin_to(c2) - coin_to(c1));
	printf("%d.%d.%d",c.g,c.k,c.s);

	return 0;
}