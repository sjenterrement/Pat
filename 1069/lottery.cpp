//15/20
#include<cstdio>
#include<vector>
#include<set>
#include<string>
#include<iostream>
using namespace std;

int M, N, S;
vector<string> v,v1;

int main() {
	scanf_s("%d%d%d", &M, &N, &S);
	string s;
	for (int i = 0; i < M; i++)
	{
		cin >> s;
		v.push_back(s);
	}

	
	for (int i = S-1; i < M; i+=N)
	{
		
		if (N<S)
		{
			break;
		
		}
		vector<string>::iterator it;
		it = find(v1.begin(), v1.end(), v[i]);
		if (it==v1.end())
		{
			v1.push_back(v[i]);
		}
		else
		{
			v1.push_back(v[i + 1]);
			i++;
		}
	}

	if (v1.empty())
	{
		printf("Keep going...");
	}
	else
	{
		for (int i = 0; i < v1.size(); i++)
		{
			if (i==v1.size()-1)
			{
				cout << v1[i];
			}
			else
			{
				cout << v1[i] << endl;
			}
		}
	}


	return 0;
}