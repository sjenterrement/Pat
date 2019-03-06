//15/15
#include<iostream>
#include<string>
using namespace std;

int N;
string s;

int main() {
	cin >> N;
	getchar();
	for (int i = 0; i < N; i++)
	{
		getline(cin, s);
		if (s.length() < 6)
		{
			cout << "Your password is tai duan le." << endl;
			continue;
		}
		else
		{
			int flag_alpha = 0, flag_num = 0, flag = 1;
			for (int i = 0; i < s.length(); i++)
			{
				if (s[i] != '.' && !isalnum(s[i]))
				{
					flag = 0;
					cout << "Your password is tai luan le." << endl;
					break;
				}
				else
				{
					if (isalpha(s[i]))
					{
						flag_alpha = 1;
					}
					if (isdigit(s[i]))
					{
						flag_num = 1;
					}

				}
			}
			if (flag)
			{
				if (flag_alpha&&flag_num)
				{
					cout << "Your password is wan mei." << endl;
				}
				else if (!flag_alpha)
				{
					cout << "Your password needs zi mu." << endl;
				}
				else if (!flag_num)
				{
					cout << "Your password needs shu zi." << endl;
				}
			}

		}
	}

	return 0;
}