//15/15!!
#include<cstdio>
using namespace std;

int jc, jh, yc, yh;
int j_c=0,y_c=0;

int main() {
	int n;
	scanf_s("%d", &n);
	while (n--)
	{
		scanf_s("%d%d%d%d", &jc, &jh, &yc, &yh);
		if (jc + yc != jh && jc + yc == yh)
		{
			j_c++;
		}
		else if (jc + yc == jh && jc + yc != yh)
		{
			y_c++;
		}
	}

	printf("%d %d", j_c, y_c);

	return 0;
}