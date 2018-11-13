#include<stdio.h>
int main() {
	int n;
	int s = 0;
	scanf_s("%d", &n);
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
			s++;

		}
		else
		{
			n = (3 * n + 1) / 2;
			s++;
		}
	}
	printf("%d\n", s);

	return 0;


}
