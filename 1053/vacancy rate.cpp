/*//20/20
#include<cstdio>
using namespace std;

double N, e, D, K, ek;
double count_p=0, count_v=0;

int main() {
	scanf_s("%lf%lf%lf", &N, &e, &D);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%lf",&K);
		double count = 0, flag1 = 0, flag2 = 0;
		for (int i = 0; i < K; i++)
		{
			scanf_s("%lf", &ek);
			if (ek<e)
			{
				count++;
				if (count>K/2)
				{
					flag1 = 1;
					if (K>D)
					{
						flag2 = 1;
					}
				}
			}
		}
		if (flag1)
		{
			count_p++;
			if (flag2)
			{
				count_v++;
			}
		}
	}
	
	printf("%.1f%% %.1f%%", ((count_p - count_v) / N)*100.0, (count_v / N)*100.0);

	return 0;
}*/

#include<iostream>
using namespace std;
int main() {
	int n, d, k, must = 0, maybe = 0;
	double e, temp;
	cin >> n >> e >> d;
	for (int i = 0; i < n; i++) {
		cin >> k;
		int sum = 0;
		for (int j = 0; j < k; j++) {
			cin >> temp;
			if (temp < e)
				sum++;
		}
		if (sum > (k / 2))
			k > d ? must++ : maybe++;
	}

	double maybere = (double)maybe / n * 100;
	double mustre = (double)must / n * 100;
	printf("%.1f%% %.1f%%", maybere, mustre);

	return 0;
}