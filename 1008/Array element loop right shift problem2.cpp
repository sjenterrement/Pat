#include<iostream>
#include<list>
using namespace std;
/*
*ÀûÓÃlist
*/
int main() {
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
