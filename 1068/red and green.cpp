//17/20
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;

struct metrix
{
	int column;
	int row;
	int color;
}mt;

const int maxn = 1000 + 3;
int M, N, d;
int a[maxn][maxn];

vector<metrix> v;

int main() {

	scanf_s("%d%d%d", &M, &N, &d);
	for (int i = 1; i < N + 1; i++)
	{
		for (int j = 1; j < M + 1; j++)
		{
			scanf_s("%d", &a[j][i]);

			if (i != 1 && i != N + 1 && j != 1 && j != M + 1)
			{
				mt.column = j;
				mt.row = i;
				mt.color = a[j][i];
				v.push_back(mt);
			}

		}
	}


	int count=0;
	metrix mtx;
	for (int i = 0; i < v.size(); i++)
	{
		int x1 = a[v[i].column][v[i].row] - a[v[i].column][v[i].row - 1];
		int x2 = a[v[i].column][v[i].row] - a[v[i].column + 1][v[i].row - 1];
		int x3 = a[v[i].column][v[i].row] - a[v[i].column + 1][v[i].row];
		int x4 = a[v[i].column][v[i].row] - a[v[i].column + 1][v[i].row + 1];
		int x5 = a[v[i].column][v[i].row] - a[v[i].column][v[i].row + 1];
		int x6 = a[v[i].column][v[i].row] - a[v[i].column - 1][v[i].row + 1];
		int x7 = a[v[i].column][v[i].row] - a[v[i].column - 1][v[i].row];
		int x8 = a[v[i].column][v[i].row] - a[v[i].column - 1][v[i].row - 1];
		if (x1 > d&&x2 > d&&x3 > d&&x4 > d&&x5 > d&&x6 > d&&x7 > d&&x8 > d)
		{
			count++;
			mtx = v[i];
		}
	}

	if (count == 0)
	{
		printf("Not Exist");
	}
	else if (count == 1)
	{
		printf("(%d, %d): %d", mtx.column, mtx.row, mtx.color);
	}
	else
	{
		printf("Not Unique");
	}


	return 0;
}