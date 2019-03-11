/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string A;
	string B;
	int num;
	char ref[13] = { '0','1','2','3','4','5','6','7','8','9','J','Q','K' };
	string c = "";
	cin >> A >> B;
	if (B.length() < A.length()) { //补全位数 B小于A 
		for (int i = B.length(); i < A.length(); i++) {
			B = "0" + B;
		}
	}
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());
	for (int i = 0; i < A.length(); i++) {
		if ((i + 1) % 2 != 0) {
			num = ((A[i] - '0' + B[i] - '0') % 13);
			c += ref[num];
		}
		else {
			num = B[i] - A[i];
			if (num < 0)num += 10;
			c += ref[num];
		}
	}
	if (A.length() < B.length()) {  //补全位数B大于A 
		for (int i = A.length(); i < B.length(); i++) {
			c += B[i];
		}
	}
	reverse(c.begin(), c.end());
	cout << c;
	return 0;
}*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string a, b, c;
	cin >> a >> b;
	int lena = a.length(), lenb = b.length();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	if (lena > lenb)
		b.append(lena - lenb, '0');
	else
		a.append(lenb - lena, '0');
	char str[14] = { "0123456789JQK" };
	for (int i = 0; i < a.length(); i++) {
		if (i % 2 == 0) {
			c += str[(a[i] - '0' + b[i] - '0') % 13];
		}
		else
		{
			int temp = b[i] - a[i];
			if (temp < 0) temp = temp + 10;
			c += str[temp];
		}
	}
	for (int i = c.length() - 1; i >= 0; i--)
		cout << c[i];
	return 0;
}