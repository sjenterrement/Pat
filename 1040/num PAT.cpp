#include<cstdio>
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