#include<stdio.h>
int main() {
	char a[101], x;
	int k1=1, k2=0;
	scanf_s("%c%*c",&x);
	gets_s(a);
	if (x=='C')
	{
		for (int i = 0; i < a[i]; i++)
		{
			if (a[i]!=a[i+1])
			{
				if (k1==1)
				{
					printf("%c", a[i]);
				}
				else
				{
					printf("%d%c", k1, a[i]);
					k1 = 1;
				}
			}
			else
			{
				k1++;
			}
		}
	}
	else
	{
		for (int i = 0; a[i]; i++)
		{
			if (('0'<=a[i])&&('9'>=a[i]))
			{
				k2 = k2 * 10 + a[i] - '0';

			}
			else
			{
				if (k2==0)
				{
					printf("%c", a[i]);
				}
				else
				{
					while (k2--)
					{
						printf("%c", a[i]);
					}
					k2 = 0;
				}
			}
		}
	}

	return 0;
}