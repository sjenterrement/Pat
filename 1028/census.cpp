#include<cstdio>
using namespace std;

int main() {
	struct birthday
	{
		char name[6];
		int year;
		int month;
		int day;
	}a,min,max;
	max.year = 2014; max.month = 9; max.day = 7;
	min.year = 1814; min.month = 9; min.day = 5;

	int n;
	int cnt = 0;

	scanf_s("%d", &n);
	while (n--)
	{
		scanf_s("%s %d/%d/%d", &a.name, &a.year, &a.month, &a.day);
		cnt++;
		if (a.year>2014||(a.year==2014&&a.month>9||(a.year==2014&&a.month==9&&a.day>6)|| a.year < 1814 || (a.year == 1814 && a.month < 9) || (a.year == 1814 && a.month == 9 && a.day < 6)))
		{
			cnt--;
			continue;
		}
		if (a.year < max.year || (a.year == max.year&&a.month < max.month) || (a.year == max.year&&a.month == max.month&&a.day < max.day)) {
			max = a;
		}
		if (a.year>min.year||(a.year==min.year&&a.month>min.month)||(a.year==min.year&&a.month==min.month&&a.day>min.day))
		{
			min = a;
		}
		
	}
	printf("%d", cnt);
	if (cnt!=0)
		{
			printf(" %s %s", max.name, min.name);
		}
	return 0;
}