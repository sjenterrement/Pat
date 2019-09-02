/*#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main() {
	int n, score;
	int max = 0, min = 100;
	cin >> n;
	char name[11], num[11];
	char highname[11], highnum[11];
	char lowname[11], lownum[11];
	while (n--)
	{
		cin >> name;
		cin >> num;
		cin >> score;
		if (score>max)
		{
			max = score;
			memcpy(highname,name,sizeof(name));
			memcpy(highnum, num, sizeof(num));
		}
		if (score <min)
		{
			min = score;
			memcpy(lowname, name, sizeof(name));
			memcpy(lownum, num, sizeof(num));
		}
	}
	cout << highname << " " << highnum << endl;
	cout << lowname << " " << lownum;
}
*/
#include<iostream>
#include<string>
using namespace std;
int main() {
	int n, min = 101, max = 0, score;
	cin >> n;
	string minName, minNum, maxName, maxNum, name, num;
	for (int i = 0; i < n; i++) {
		cin >> name >> num >> score;
		if (score > max) {
			max = score;
			maxName = name;
			maxNum = num;
		}
		if (score < min) {
			min = score;
			minName = name;
			minNum = num;
		}
	}
	cout << maxName << " " << maxNum << endl << minName << " " << minNum;
	return 0;
}