/*#include "stdio.h"

int main()
{
	int i, j, max = 0, num[6] = { 0 };
	char ch;
	while (scanf("%c", &ch) && ('\n' != ch))
	{
		switch (ch)
		{
		case 'P': ++num[0]; break;
		case 'A': ++num[1]; break;
		case 'T': ++num[2]; break;
		case 'e': ++num[3]; break;
		case 's': ++num[4]; break;
		case 't': ++num[5]; break;
		default: break;
		}
	}
	for (i = 0; i < 6; ++i)
		if (max < num[i])
			max = num[i];
	for (i = 0; i < max; ++i)
		for (j = 0; j < 6; ++j)
			if (num[j])
			{
				--num[j];
				switch (j)
				{
				case 0: printf("P"); break;
				case 1: printf("A"); break;
				case 2: printf("T"); break;
				case 3: printf("e"); break;
				case 4: printf("s"); break;
				case 5: printf("t"); break;
				default: break;
				}
			}
	printf("\n");

	return 0;
}*/
#include<iostream>
using namespace std;
int main() {
	int hash[128] = { 0 }, c;
	while ((c = cin.get()) != EOF)hash[c]++;
	while (hash['P'] > 0 || hash['A'] > 0 || hash['T'] > 0 || hash['e'] > 0 || hash['s'] > 0 || hash['t'] > 0) {
		if (hash['P']-- > 0) cout << 'P';
		if (hash['A']-- > 0) cout << 'A';
		if (hash['T']-- > 0) cout << 'T';
		if (hash['e']-- > 0) cout << 'e';
		if (hash['s']-- > 0) cout << 's';
		if (hash['t']-- > 0) cout << 't';
	}
	return 0;
}