/*
#include<iostream>
#include<list>
using namespace std;
/*
*ÀûÓÃlist
*/
/*int main() {
	int n, shift, temp;
	cin >> n >> shift;
	list<int> mylist;
	while (n--)
	{
		cin >> temp;
		mylist.push_back(temp);
	}
	while (shift--)
	{
		temp = mylist.back();
		mylist.pop_back();
		mylist.push_front(temp);
	}
	list<int>::iterator itr = mylist.begin();
	bool first = true;
	while (itr!=mylist.end())
	{
		if (first)
		{
			cout << *itr++;
			first = false;
		}
		else
		{
			cout << " " << *itr++;
		}
	}
	cout << endl;
	return 0;
}
*/
/*#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int mina() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	m %= n;
	if (m != 0) {
		reverse(begin(a), begin(a) + n);
		reverse(begin(a), begin(a) + m);
		reverse(begin(a), begin(a) + n);
	}
	for (int i = 0; i < n - 1; i++) {
		cout << a[i] << " ";
	}
	cout << a[n - 1];
	return 0;
}*/

/*#include<iostream>
#include<list>
using namespace std;
int main() {
	int n, m, k;
	cin >> n >> m;
	list<int> l;
	for (int i = 0; i < n; i++) {
		cin >> k;
		l.push_back(k);
	}
	for (int i = n - 1; i > n - m-1; i--) {
		int temp = l.back();
		l.pop_back();
		l.push_front(temp);
	}
	list<int>::iterator itr = l.begin();
	bool first = true;
	while (itr != l.end()) {
		if (first) {
			cout << *itr++;
			first = false;
		}
		else
		{
			cout << " " << *itr++;
		}
	}

	return 0;
}*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n, m, k;
	cin >> n >> m;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> k;
		v.push_back(k);
	}
	m %= n;
	if(m != 0) {
		reverse(v.begin(), v.end());
		reverse(v.begin(), v.begin() + m);
		reverse(v.begin() + m, v.end());
	}
	bool first = true;
	for (int i = 0; i < v.size(); i++) {
		if (first) {
			cout << v[i];
			first = false;
		}
		else
		{
			cout << " " << v[i];
		}
	}
	return 0;
}

