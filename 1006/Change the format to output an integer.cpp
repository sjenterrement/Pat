#include<iostream>
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

}