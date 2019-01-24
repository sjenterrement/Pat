#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int stringToInt(const string &s) {
	stringstream ss;
	int result;
	ss << s;
	ss >> result;
	return result;
}

int main() {
	string str, num;
	int tail;
	cin >> str;
	char sign = str[0];
	int locE = str.find('E');
	num = str[1];
	num += str.substr(3, locE - 3);
	tail = stringToInt(str.substr(locE + 1));

	if (sign=='-')
	{
		cout << '-';
	}
	if (tail<0)
	{
		cout << "0.";
		for (int i = 0; i < -tail-1; i++)
			cout << '0';
		cout << num;
	}
	else if(tail >= num.length() - 1)
	{
		cout << num;
		for (int i = 0; i < tail - num.length() + 1; i++)
			cout << '0';
	}
	else
	{
		cout << num.substr(0, tail + 1);
		cout << ".";
		cout << num.substr(tail + 1);
	}
	system("pause");
	return 0;
}