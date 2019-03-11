/*
strtock
#include<string.h>
#include<vector>
#include<iostream>
using namespace std;

int main() {
	char str[80];
	const char *ch = " ";
	char *result;
	char *sb;
	vector<char*>v;
	gets_s(str);//gets可以把空格也扫描进去

	result = strtok_s(str, ch, &sb);
	while (result != NULL)
	{
		v.push_back(result);
		result = strtok_s(NULL, ch, &sb);
	}
	for (int i = v.size() - 1; i >= 0; i--)
	{
		if (i != 0)
		{
			cout << v[i] << " ";
		}
		else
		{
			cout << v[0];
		}
	}
	return 0;
}*/