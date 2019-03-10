//柳婼大佬
/*
这里的用map是因为结构体的属性是分开输入的，
而且要与准考证号相匹配，
所以就需要桥梁来找到相应的学生id，
id是string类型的所以要用map，
如果是整型可以用数组想关联
*/
#include<vector>
#include<map>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

struct student
{
	string id;
	int gp, gm, gf, g;
};

bool cmp(student a,student b) {
	return a.g != b.g ? a.g > b.g:a.id < b.id;
}

map<string, int> idx;
vector<student> v,ans;
int P, M, N;

int main() {
	cin >> P >> M >> N;
	string s;
	int cnt = 1, score;
	for (int i = 0; i < P; i++)
	{
		cin >> s >> score;
		if (score>=200)
		{
			v.push_back(student{ s,score,-1,-1,0 });
			idx[s] = cnt++;
		}
	}
	for (int i = 0; i < M; i++)
	{
		cin >> s >> score;
		if (idx[s] != 0)
			v[idx[s] - 1].gm = score;
	}
	for (int i = 0; i < N; i++)
	{
		cin >> s >> score;
		if (idx[s]!=0)
		{
			int temp = idx[s] - 1;
			v[temp].gf = v[temp].g = score;
			if (v[temp].gm>v[temp].gf)
			{
				v[temp].g = int(v[temp].gm*0.4 + v[temp].gf*0.6 + 0.5);
			}
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].g>=60)
		{
			ans.push_back(v[i]);
		}
	}
	sort(ans.begin(), ans.end(), cmp);
	for (int i = 0; i < ans.size(); i++)
	{
		printf("%s %d %d %d %d\n", ans[i].id.c_str(), ans[i].gp, ans[i].gm, ans[i].gf, ans[i].g);
	}
	return 0;
}