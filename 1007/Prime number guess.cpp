#include<cmath>
#include<iostream>
using namespace std;

/*bool is_prime(int num) {
	if (num==1||num==0)
	{
		return false;
	}
	if (num==2)
	{
		return true;
	}
	int temp = (int)sqrt((double)num);
	for (int i = 2; i <=temp; i++)
	{
		if (num%i==0)
		{
			return false;
		}
	}
	return true;
}

int main() {
	int num, count = 0;
	cin >> num;
	for (int i = 3; i <=num-2; i++)
	{
		if (is_prime(i)&&is_prime(i+2))
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}*/
#include<iostream>
using namespace std;

bool is_prime(int k) {
	for (int i = 2; i*i <= k; i++) {
		if (k % i == 0) return false;
	}
	return true;
}

int main() {
	int k, count = 0;
	cin >> k;
	for (int i = 3; i <= k - 2; i++) {
		if (is_prime(i) && is_prime(i + 2))
			count++;
	}
	cout << count;
	return 0;
}