#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int a[], b[],s[], m[],n;

 insertion(int a[],int b[],int n) {
	int temp,ans;
	for (int i = 0; i < n; i++)
	{
		ans = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[j]<a[i])
			{
				ans++;
			}
		}
		temp = a[ans];
		a[ans] = a[i];
		a[i] = temp;
		if (a==b)
		{
			return a;
		}
	}
	return false;
}

int main() {
	cin >> n;
	cin >> a[n];
	cin >> b[n];
	
}