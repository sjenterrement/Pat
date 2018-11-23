#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n, x, temp;
	int k = 1;
	double result3;
	int count[5] = { 0 };
	int result[5] = { 0 };

	cin >> n;
	while (n--)
	{
		cin >> x;
		temp = x % 5;
		switch (temp)
		{
		case 0:
			if (x % 2 == 0) {
				count[0]++;
				result[0] += x;
			}
			break;
		case 1:
			count[1]++;
			if (count[1] % 2 == 1) 
				result[1] += x;
			else
				result[1] -= x;
			break;
		case 2:
			count[2]++;
			result[2]++;
			break;
		case 3:
			count[3]++;
			result[3] += x;
			break;
		case 4:
			count[4]++;
			if (x > result[4])
			{
				result[4] = x;
			}
			break;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (count[i] != 0)
			cout << result[i] << " ";
		else
			cout << "N ";
	}
	if (count[3] != 0)
	{
		result3 = (double)result[3] / count[3];
		cout << setiosflags(ios::fixed) << setprecision(1) << result3 << " ";
	}
	else
		cout << "N ";
	if (count[4] != 0)
		cout << result[4];
	else
		cout << "N";

	return 0;
}