/*//grade:15
#include<iostream>
using namespace std;

int main() {
	int A, D_A, B, D_B;
	int count_A = 0, count_B = 0;
	int P_A = 0, P_B = 0;
	int temp;
	cin >> A >> D_A >> B >> D_B;

	temp = A;
	while (temp)
	{
		if (temp % 10 == D_A)
			count_A++;
		temp = temp / 10;
	}

	temp = B;
	while (temp)
	{
		if (temp % 10 == D_B)
			count_B++;
		temp = temp / 10;
	}

	for (int i = 0; i < count_A; i++)
	{
		P_A = P_A * 10 + D_A;
	}

	for (int i = 0; i < count_B; i++)
	{
		P_B = P_B * 10 + D_B;
	}

	cout << P_A + P_B;

	return 0;
}*/

#include<string>
#include<iostream>
using namespace std;
int main() {
	string a, b, spa = "", spb = "";
	int da, db, pa, pb;
	cin >> a >> da >> b >> db;
	for (int i = 0; i < a.length(); i++) {
		if (da == (a[i] - '0'))
		{
			spa += a[i];
		}
	}
	for (int i = 0; i < b.length(); i++) {
		if (db == (b[i] - '0'))
		{
			spb += b[i];
		}
	}

	if (spa.empty() && !spb.empty()) {
		pa = 0;
		pb = stoi(spb);
	}
	else if (!spa.empty() && spb.empty()) {
		pa = stoi(spa);
		pb = 0;
	}
	else if (spa.empty() && spb.empty()) {
		pa = 0;
		pb = 0;
	}
	else
	{
		pa = stoi(spa);
		pb = stoi(spb);
	}
	cout << pa + pb;

	return 0;
}