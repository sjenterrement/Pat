/*#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
	int N, N1, N2, result;
	vector<int> v;
	cin >> N;
	result = N;
	bool flag = true;
	while (flag)
	{
		v.clear();
		for (int i = 0; i < 4; i++)
		{
			v.push_back(result % 10);
			result /= 10;
		}

		sort(v.begin(), v.end());//从小到大排序
		N1 = v[3] * 1000 + v[2] * 100 + v[1] * 10 + v[0];
		N2 = v[0] * 1000 + v[1] * 100 + v[2] * 10 + v[3];
		result = N1 - N2;

		cout << setfill('0') << setw(4) << N1 << " - " << setfill('0') << setw(4) << N2 << " = " << setfill('0') << setw(4) << result << endl; //设置好输出格式
		if (result == 6174 || result == 0)
			flag = false;
	}

	system("pause");
	return 0;
}
*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool cmp(char a, char b) {
	return a > b;
}
int main() {
	string s;
	cin >> s;
	s.insert(0, 4 - s.length(), '0');
	do {
		string a = s, b = s;
		sort(a.begin(), a.end(), cmp);
		sort(b.begin(), b.end());
		int result = stoi(a) - stoi(b);
		s = to_string(result);
		s.insert(0, 4 - s.length(), '0');
		cout << a << "-" << b << "=" << s << endl;
	} while (s != "6174"&&s != "0000");
	return 0;
}