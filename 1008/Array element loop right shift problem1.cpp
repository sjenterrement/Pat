//#include<iostream>
//#include<vector>
//using namespace std;
///*
//*普通循环方法
//*/
//int main() {
//	int n, shift, temp;
//	cin >> n;
//	cin >> shift;
//	vector<int> v;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		v.push_back(temp);
//	}
//	for (int i = 0; i < shift; i++)
//	{
//		temp = v[n - 1];
//		for (int j= n-1; j > 0; j--)
//		{
//			v[j] = v[j - 1];
//		}
//		v[0] = temp;
//	}
//	for (int i = 0; i < n-1; i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << v[n - 1];
//	return 0;
//}