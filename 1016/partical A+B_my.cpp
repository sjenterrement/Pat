//grade:15
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
}