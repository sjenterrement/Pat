//20/20
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
}