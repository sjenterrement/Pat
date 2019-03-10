#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

struct node {
	string id;
	int score;
}stu;

struct node2 {
	string code;
	int num;
}p;

bool cmp(node &a, node &b) {
	return a.score != b.score ? a.score > b.score:a.id < b.id;
}
bool cmp2(node2 &a, node2 &b) {
	return a.num != b.num ? a.num > b.num : a.code < b.code;
}
bool order1(vector<node> v, string s) {
	int flag = 0;
	vector<node> temp;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].id[0] == s[0]) {
			temp.push_back(v[i]);
			flag = 1;
		}

	}
	sort(temp.begin(), temp.end(), cmp);
	if (!flag)
		return false;
	cout << "Case 1: 1 " << s << endl;
	for (int i = 0; i < temp.size(); i++) {
		cout << temp[i].id << " " << temp[i].score << endl;
	}
	return true;
}

bool order2(vector<node> v, string s) {
	int flag = 0;
	int grade = 0, count = 0;
	for (int i = 0; i < v.size(); i++) {
		string temp = v[i].id.substr(1, 3);
		if (temp == s) {
			grade += v[i].score;
			count++;
			flag = 1;
		}
	}
	if (!flag)
		return false;
	cout << "Case 2: 2 " << s << endl;
	cout << count << " " << grade << endl;
	
		return true;
}

bool order3(vector<node> v, string s) {
	int flag = 0;
	int count = 0;
	unordered_map<string, int> m;
	for (int i = 0; i < v.size(); i++) {
		string temp = v[i].id.substr(4, 6);
		if (temp == s) {
			string temp2 = v[i].id.substr(1, 3);
			m[temp2]++;
			flag = 1;
		}
	}
	vector<node2> v2;
	for (auto it = m.begin(); it != m.end(); it++)
	{
		p.code = it->first;
		p.num = it->second;
		v2.push_back(p);
	}
	sort(v2.begin(), v2.end(), cmp2);

	if (!flag)
		return false;
	cout << "Case 3: 3 " << s << endl;
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i].code << " " << v2[i].num << endl;
	}
		return true;
}

int main() {
	int n, m, flag = 0, c = 1;
	scanf("%d%d", &n, &m);
	vector<node> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].id >> v[i].score;
	}
	int order;
	string s;
	for (int i = 0; i < m; i++) {
		scanf("%d", &order);
		cin >> s;
		switch (order) {
		case 1:
			flag=order1(v, s);
			//flag = order1(v, s);
			if (!flag) {
				cout << "Case " << c << ": " << order << " " << s << endl;
				cout << "NA" << endl;
			}
			break;
		case 2:
			flag = order2(v, s);
			//flag = order2(v, s);
			if (!flag) {
				cout << "Case " << c << ": " << order << " " << s << endl;
				cout << "NA" << endl;
			}
			break;
		case 3:
			flag = order3(v, s);
			//flag = order3(v, s);
			if (!flag) {
				cout << "Case " << c << ": " << order << " " << s << endl;
				cout << "NA" << endl;
			}
			break;
		default:
			break;
		}
		c++;
	}
	return 0;
}