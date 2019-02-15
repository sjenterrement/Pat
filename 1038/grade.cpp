#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

struct MyStruct
{
	int grade;
	int count = 0;
}ms;

vector<MyStruct> v;
const int maxn = 100000 + 5;
int a[maxn], n1, n2;

int main() {
	scanf_s("%d ", &n1);
	for (int i = 0; i < n1; i++)
	{
		if (i == n1 - 1)
		{
			scanf_s("%d", &a[i]);
		}
		else
		{
			scanf_s("%d ", &a[i]);
		}

	}
	sort(a, a + n1);
	scanf_s("%d ", &n2);
	for (size_t i = 0; i < n2; i++)
	{
		if (i == n2 - 1)
		{
			scanf_s("%d", &ms.grade);
			v.push_back(ms);
		}
		else
		{
			scanf_s("%d ", &ms.grade);
			v.push_back(ms);
		}
	}
	for (int i = 0; i < n2; i++)
	{
		for (int j =0; j < n1; j++)
		{
			if (v[i].grade < a[j]) {
				break;
			}
			else if (v[i].grade == a[j])
			{
				v[i].count++;
			}
		}
		if (i == n2 - 1)
		{
			printf("%d", v[i].count);
		}
		else {
			printf("%d ", v[i].count);
		}
	}
	return 0;
}
