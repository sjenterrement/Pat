//18/20
#include<string>
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

bool is_prime(int x) {
	if (x==0||x==1)
	{
		return false;
	}
	else if (x==2)
	{
		return true;
	}
	int temp = (int)sqrt((double)x);
	for (int i = 2; i <= temp; i++)
	{
		if (x%i==0)
		{
			return false;
		}
	}
	return true;
}

int L, K;
string s;

int main() {
	cin >> L >> K;
	cin >> s;
	for (int i = 0; i < L; i++)
	{
		string temps = s.substr(i, K);
		int tempi = stoi(temps);
		if (is_prime(tempi)) {
			cout << setfill('0') << setw(K) << tempi;
			return 0;
		}
	}

	cout << "404";

	return 0;
}