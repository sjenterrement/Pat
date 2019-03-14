/*#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<int> v(10);
	for (int i = 0; i < 10; i++)
	{
		cin >> v[i];
	}
	if (v[0] != 0)
	{
		int j;
		for (j = 1; j < 10 && v[j] == 0; j++);
		cout << j;
		v[j]--;
	}
	for (int i = 0; i < 10; i++)
	{
		while (v[i] != 0)
		{
			cout << i;
			v[i]--;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
*/
#include<iostream>
using namespace std;
int main() {
	int a[10], t;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < 10; i++) {
		if (a[i] != 0) {
			cout << i;
			t = i;
			break;
		}
	}
	for (int i = 0; i < a[0]; i++) cout << 0;
	for (int i = 0; i < a[t] - 1; i++) cout << t;
	for (int i = t+1; i < 10; i++) {
		for (int j = 0; i < a[i]; j++) {
			cout << i;
		}
	}

	return 0;
}