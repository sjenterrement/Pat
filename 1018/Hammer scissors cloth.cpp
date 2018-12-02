#include<iostream>
#include<vector>
using namespace std;
int main()
{
	char a, b;
	int num;
	int jia[3] = { 0 };//分别记录甲赢，平，输的次数
	int jy[3] = { 0 };//分别表示甲通过J B C 赢的次数
	int yy[3] = { 0 };//分别表示乙通过J B C 赢的次数
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> a >> b;
		if (a == 'J')
		{
			switch (b)
			{
			case 'J':jia[1]++; break;
			case 'B':jia[0]++; jy[0]++; break;
			case 'C':jia[2]++; yy[2]++; break;
			}

		}
		else if (a == 'B')
		{
			switch (b)
			{
			case 'J':jia[2]++; yy[0]++; break;
			case 'B':jia[1]++; break;
			case 'C':jia[0]++; jy[1]++; break;
			}
		}
		else if (a == 'C')
		{
			switch (b)
			{
			case 'J':jia[0]++; jy[2]++; break;
			case 'B':jia[2]++; yy[1]++; break;
			case 'C':jia[1]++; break;
			}
		}
	}

	cout << jia[0] << " " << jia[1] << " " << jia[2] << endl;
	cout << jia[2] << " " << jia[1] << " " << jia[0] << endl;
	int max1 = jy[0], max2 = yy[0];
	int temp1 = 0, temp2 = 0;
	if (jy[1] >= max1)
	{
		max1 = jy[1];
		temp1 = 1;
	}
	if (jy[2] > max1 || (jy[2] >= max1 && temp1 == 0))
	{
		max1 = jy[2];
		temp1 = 2;
	}
	if (yy[1] >= max2)
	{
		max2 = yy[1];
		temp2 = 1;
	}
	if (yy[2] > max2 || (yy[2] >= max2 && temp2 == 0))
	{
		max2 = yy[2];
		temp2 = 2;
	}

	if (temp1 == 0)
		cout << "J ";
	if (temp1 == 1)
		cout << "B ";
	if (temp1 == 2)
		cout << "C ";

	if (temp2 == 0)
		cout << "J";
	if (temp2 == 1)
		cout << "B";
	if (temp2 == 2)
		cout << "C";
	system("Pause");
	return 0;
}
