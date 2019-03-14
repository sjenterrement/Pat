/*
#include<iostream>
#include<string>
using namespace std;

int main() {
	string A, Q;
	int B, R=0;

	cin >> A >> B;
	int len = A.length();
	int temp = A[0] - '0';
	if (temp >= B)
		Q.push_back(temp/B + '0');
	for (int i = 1; i < len; i++)
	{
		R = temp % B;
		temp = R * 10 + A[i] - '0';
		Q.push_back(temp / B + '0');
	}
	R = temp % B;
	if (len==1&&A[0]-'0'<B)
	{
		cout << "0 " << A[0] - '0';
	}
	else
	{
		cout << Q <<" "<< R;
	}
}*/
#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	int a, t = 0, temp = 0;
	cin >> s >> a;
	int len = s.length();
	t = (s[0] - '0') / a;
	if ((t != 0 && len > 1) || len == 1)
		cout << t;
	temp = (s[0] - '0') % a;
	for (int i = 1; i < len; i++) {
		t = (temp * 10 + s[i] - '0') / a;
		cout << t;
		temp = (temp * 10 + s[i] - '0') % a;
	}
	cout << " " << temp;
	return 0;
}