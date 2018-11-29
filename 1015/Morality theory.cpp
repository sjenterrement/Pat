#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;

struct Students
{
	int number;
	int grade_d;
	int grade_c;
	int grade;
};

bool compare(Students a, Students b) {
	if (a.grade > b.grade)
		return true;
	else if (a.grade == b.grade)
	{
		if (a.grade_d > b.grade_d)
		{
			return true;
		}
		else if (a.grade_d == b.grade_d)
		{
			if (a.number < b.number)
			{
				return true;
			}
		}
	}
	return false;
}

int main() {
	vector<Students>stu1, stu2, stu3, stu4;
	Students stu;
	int N, L, H;
	int num, g_d, g_c;
	int count = 0;

	scanf_s("%d %d %d", &N, &L, &H);

	while (N--)
	{
		scanf_s("%d%d%d", &num, &g_d, &g_c);

		stu.number = num;
		stu.grade_d = g_d;
		stu.grade_c = g_c;
		stu.grade = g_d + g_c;

		if (g_d >= L && g_c >= L)
		{
			count++;
			if (g_d >= H && g_c >= H)
			{
				stu1.push_back(stu);
			}
			else if (g_d >= H && g_c < H)
			{
				stu2.push_back(stu);
			}
			else if (g_d < H&&g_c < H&&g_d >= g_c)
			{
				stu3.push_back(stu);
			}
			else
			{
				stu4.push_back(stu);
			}
		}
	}

	printf("%d\n", count);
	sort(stu1.begin(), stu1.end(), compare);
	sort(stu2.begin(), stu2.end(), compare);
	sort(stu3.begin(), stu2.end(), compare);
	sort(stu4.begin(), stu4.end(), compare);

	vector<Students>::iterator itr;
	for (itr = stu1.begin(); itr != stu1.end(); itr++)
		printf("%d %d %d\n", itr->number, itr->grade_d, itr->grade_c);
	for (itr = stu2.begin(); itr != stu2.end(); itr++)
		printf("%d %d %d\n", itr->number, itr->grade_d, itr->grade_c);
	for (itr = stu3.begin(); itr != stu3.end(); itr++)
		printf("%d %d %d\n", itr->number, itr->grade_d, itr->grade_c);
	for (itr = stu4.begin(); itr != stu4.end(); itr++)
		printf("%d %d %d\n", itr->number, itr->grade_d, itr->grade_c);

	return 0;
}