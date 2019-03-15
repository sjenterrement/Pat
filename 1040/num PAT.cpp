/*
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string strPAT;
	cin >> strPAT;

	int istr = strPAT.length(), numAT = 0, numPAT = 0, num = 0;
	while (istr--)
	{
		if ('T' == strPAT[istr]) numAT++;
		else if ('A' == strPAT[istr]) numPAT += numAT;
		else { 
			num += numPAT;
			if (num >= 1000000007) num %= 1000000007;
		}
	}

	printf("%d", num);
	return 0;
}
*/

#include<string>
#include<iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	int len = s.length(), result = 0, countp = 0, countt = 0;
	for (int i = 0; i < len; i++) {
		if (s[i] == 'T')
			countt++;
	}
	for (int i = 0; i < len; i++) {
		if (s[i] == 'P') countp++;
		if (s[i] == 'T') countt--;
		if (s[i] == 'A') result = (result + (countp*countt) % 1000000007) % 1000000007;
	}
	cout << result;
	return 0;
}