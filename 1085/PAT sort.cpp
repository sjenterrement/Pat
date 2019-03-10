//GOOD!
#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct school {
	string name;
	int grade;
	int num;
}sch;

bool cmp(school a, school b) {
	if (a.grade != b.grade)
		return a.grade > b.grade;
	else if (a.num != b.num)
		return a.num < b.num;
	else
		return a.name < b.name;
}

int main() {
	int n;
	map<string, double> total;
	map<string, int>num;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string id, name;
		double score, grade;
		cin >> id >> score >> name;
		if (id[0] == 'B')
			grade = score / 1.5;
		else if (id[0] == 'A')
			grade = score;
		else
			grade = score * 1.5;
		string temp = "";
		for (int i = 0; i < name.length(); i++)
		{
			temp += tolower(name[i]);
		}

		total[temp] += grade;
		num[temp]++;
	}

	vector<school> v; auto it1 = num.begin();
	for (auto it = total.begin(); it != total.end(); it++) {
		v.push_back(school{ it->first,(int)total[it->first],num[it->first] });
	}

	sort(v.begin(), v.end(), cmp);
	int rank = 0, pres = -1;
	printf("%d\n", (int)v.size());
	for (int i = 0; i < v.size(); i++)
	{
		if (pres != v[i].grade) rank = i + 1;
		pres = v[i].grade;
		printf("%d ", rank);
		cout << v[i].name;
		printf(" %d %d\n", v[i].grade, v[i].num);
	}

	return 0;
}