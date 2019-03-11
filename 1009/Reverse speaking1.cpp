//#include<string.h>
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//	string str;
//	vector<string> v;
//	getline(cin, str);
//	string temp = "";
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i]=='\n')
//		{
//			break;
//		}
//		if (str[i]!=' ')
//		{
//			temp += str[i];
//		}
//		else
//		{
//			v.push_back(temp);
//			temp = "";
//		}
//	}
//	v.push_back(temp);
//	for (int i = v.size()-1; i >=0; i--)
//	{
//		if (i!=0)
//		{
//			cout << v[i] << " ";
//		}
//		else
//		{
//			cout << v[0];
//		}
//	}
//	return 0;
//}

/*
程序可以不用结束输入也可以ac，ctrl+z，结束输入
*/
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main() {
	stack<string> sck;
	string s;
	while (cin >> s)
		sck.push(s);
	cout << sck.top();
	sck.pop();
	while (!sck.empty()) {
		cout << " " << sck.top();
		sck.pop();
	}
	return 0;
}
