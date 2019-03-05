#include<stdio.h>
int main()
{
	char a, b, c[1001];
	int n, i, k = 0;
	scanf("%d%*c", &n);
	while (n--)
	{
		for (i = 0; i < 4; i++)
		{
			scanf("%c-%c%*c", &a, &b);
			if (b == 'T') c[k++] = a - 'A' + 1 + '0';
		}
	}
	c[k] = '\0';
	puts(c);
	return 0;
}