#include<cstdio>
using namespace std;

int main() {
	int num1, num2, num3,n;
	int t[10000 + 4] = {0};
	int maxt, maxg=0;
	scanf_s("%d", &n);
	while (n--)
	{
		scanf_s("%d-%d %d", &num1, &num2, &num3);
		t[num1] += num3;
		if (maxg<t[num1])
		{
			maxg = t[num1];
			maxt = num1;
		}
	}

	printf("%d %d", maxt, maxg);

	return 0;
}