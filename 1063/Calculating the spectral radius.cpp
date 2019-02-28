//20/20
#include<cmath>
#include<cstdio>
using namespace std;

int N;
double real, imaginary, max = 0;

int main() {
	scanf_s("%d",&N);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%lf%lf", &real, &imaginary);
		double sr = pow(pow(real, 2) + pow(imaginary, 2), 0.5);
		if (sr>max)
		{
			max = sr;
		}
	}

	printf("%.2f",max);

	return 0;
}