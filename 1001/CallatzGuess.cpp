/*#include<stdio.h>
int main() {
	int n;
	int s = 0;
	scanf_s("%d", &n);
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
			s++;

		}
		else
		{
			n = (3 * n + 1) / 2;
			s++;
		}
	}
	printf("%d\n", s);

	return 0;


}*/

/*#include<iostream>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	while (n!=1) {
		if (n % 2 != 0)
			n = 3 * n + 1;
		n = n / 2;
		count++;
	}
	cout << count;
	return 0;
}*/

/*#include<iostream>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	while (n != 1) {
		if (n % 2 == 0)
			n = n / 2;
		else
			n = (n * 3 + 1) / 2;
		count++;
	}
	cout << count;
}*/

#include<iostream>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	while (n != 1) {
		if (n % 2 != 0) n = n * 3 + 1;
		n = n / 2;
		count++;
	}
	cout << count;
}

