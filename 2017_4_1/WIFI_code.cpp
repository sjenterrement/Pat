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
			scanf_s("%c-%c%*c", &a,5,&b);//5�ǻ�������С
			if (b == 'T') c[k++] = a - 'A' + 1 + '0';
		}
	}
	c[k] = '\0';//'\0'�ַ��������ı�־
	puts(c);
	return 0;
}