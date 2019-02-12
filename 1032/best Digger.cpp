//20/20!
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

struct digger
{
	int number;
	int grade;
}d;
const int maxn = 100000 + 5;
int n, a[100000 + 5], p;
vector<int> v;

int main() {
	scanf_s("%d", &n);
	while (n--)
	{
		scanf_s("%d", &d.number);
		scanf_s("%d", &d.grade);
		a[d.number] += d.grade;
	}

	p = max_element(a, a + maxn)-a;

	printf("%d %d", p, a[p]);
	return 0;
}
