#include<cstdio>
#include<iostream>
using namespace std;

bool judge(char a[],int index) {
	if (a[index]=='P'&&a[index+1]=='T')
	{
		return 1;
	}
	if (index=1&&(a[index] == 'A'&&a[index + 1] == 'P'))
	{
		return 1;
	}
	if (index = strlen(a)-2&& (a[index] == 'T'&&a[index + 1] == 'A'))
	{
		return 1;
	}
	return 0;
}

int main() {
	int n;
	char a[101];
	cin >> n;
	while (n--)
	{   int i = 0;
		cin >> a;
		//cout << a;
		if (a[i]!='\0')
		{
			if (a[i]!='P'&&a[i]!='A'&&a[i]!='T'&&a[i]!=' ')
			{
				cout << "NO";
			}
			else if (judge(a,i))
			{
				cout << "NO";
			}
			else
			{
				cout << "YES";
			}
			i++;
		}
	}
	//return 0;
}