/*#include<iostream>
using namespace std;
void my_print(int x) {
	switch (x)
	{
	case 0:cout << "ling"; break;
	case 1:cout << "yi"; break;
	case 2:cout << "er"; break;
	case 3:cout << "san"; break;
	case 4:cout << "si"; break;
	case 5:cout << "wu"; break;
	case 6:cout << "liu"; break;
	case 7:cout << "qi"; break;
	case 8:cout << "ba"; break;
	case 9:cout << "jiu"; break;
	default:
		break;
	}
}

int main() {
	char a[101];
	int sum=0, i=0;
	cin >> a;
	while (a[i]!='\0')
	{
		sum += a[i++] - '0';
	}
	//cout << sum;
	if (sum==0)
	{
		my_print(0);
		return 0;
	}

	int b[101], j = 0;

	while (sum!=0)
	{
		b[j++] = sum % 10;
		sum = sum / 10;
	}
	for (int i = j-1; i >=0; i--)
	{
		my_print(b[i]);
		cout << " ";
	}
	//my_print(b[0]);
	return 0;
}*/
#include<iostream>
#include<string>
using namespace std;
int main() {
	string str[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	string s;
	cin >> s;
	int sum = 0;
	for (int i = 0; i < s.length(); i++)
		sum += s[i] - '0';
	string temp = to_string(sum);
	for (int i = 0; i < temp.length(); i++) {
		if (i != 0)
			cout << " ";
		cout << str[temp[i] - '0'];
	}
	return 0;
}
