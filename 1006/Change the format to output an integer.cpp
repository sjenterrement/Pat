/* #include<iostream>
#include<string>
using namespace std;

int main() {
	int temp, num;
	string str = "";
	cin >> num;
	temp = num / 100;
	for (int i = temp; i >0; i--)
	{
		str += "B";
	}
	num = num - temp * 100;
	temp = num / 10;
	for (int i = temp; i>0; i--)
	{
		str += "S";
	}
	temp = num % 10;
	for (int i = 1; i<=temp; i++)
	{
		str +=i+48;
	}
	cout << str << endl;
	return 0;

}*/
/*#include<string>
#include<iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	string ss = "0";
	while (s.length() < 3)
		s.insert(0, ss);
	for (int i = 0; i < s[0] - '0'; i++)
		cout << "B";
	for (int i = 0; i < s[1] - '0'; i++)
		cout << "S";
	for (int i = 1; i <= s[2] - '0'; i++)
		cout << i;
	return 0;
}*/

#include<iostream>
using namespace std;
int main() {
	int k;
	cin >> k;
	int n[3];
	for (int i = 0; i < 3; i++) {
		n[i] = k % 10;
		k = k / 10;
	}
	for (int i = 0; i < n[2]; i++)
		cout << 'B';
	for (int i = 0; i < n[1]; i++)
		cout << 'S';
	for (int i = 0; i < n[0]; i++)
		cout << i + 1;
		return 0;
}