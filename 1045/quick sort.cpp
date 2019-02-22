//12/25
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

vector<int> v1, v2;
int n, x, key;

vector<int>::iterator it;

int main() {
	scanf_s("%d", &n);
	int temp = n;
	while (temp--)
	{
		scanf_s("%d", &x);
		v1.push_back(x);
		v2.push_back(x);
	}
	for (int i = 0; i < n; i++)
	{
		key = v1[i];
		for (int j = 0; j < i; j++)
		{
			if (v1[j] > key)
			{
				it = std::find(v2.begin(), v2.end(), v1[i]);
				v2.erase(it);
				break;
			}
			
		}
		for (int j = i; j < v1.size(); j++)
		{
			if (v1[j] < key)
			{
				it = std::find(v2.begin(), v2.end(), v1[i]);
				v2.erase(it);
				break;
			}
		}
	}

	if (!v2.empty())
	{
		sort(v2.begin(), v2.end());
		printf("%d\n", v2.size());
		for (int i = 0; i < v2.size(); i++)
		{
			if (i==v2.size()-1)
			{
				printf("%d", v2[i]);
			}
			else
			{
				printf("%d ", v2[i]);
			}
		}
	}

	return 0;
}