#include<stdio.h>
int main() {
	int n;
	int s = 0;
	scanf_s("%d", &n);
	for (int i = n; i > 0;)
	{
		s = s + n % 10; i = i / 10;
		//printf("%d", i);
	}
	printf("%d\n", s);
	return 0;
}