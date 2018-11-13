#include<stdio.h>
int main()
{
	char a, b, c[1001];
	int n, i, k = 0;
	scanf_s("%d%*c", &n);
	while (n--)
	{
		for (i = 0; i < 4; i++)
		{
			scanf_s("%c-%c%*c", &a,5,&b);//5是缓冲区大小
			if (b == 'T') c[k++] = a - 'A' + 1 + '0';
		}
	}
	c[k] = '\0';//'\0'字符串结束的标志
	puts(c);
	return 0;
}