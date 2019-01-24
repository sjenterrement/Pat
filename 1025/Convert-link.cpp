#include<iomanip>
#include<vector>
using namespace std;

struct link {
	int ADDR;
	int DATA;
	int NEXT;
};

int main() {
	int fa;
	int n;
	int k;
	int addr;
	int data;
	int next;
	vector<link>v1(100000), v2, v3;
	link l1;

	//cin >> fa >> n >> k;
	scanf_s("%d%d%d", &fa, &n, &k);

	while (n--)
	{
		//cin >> addr >> data >> next;
		scanf_s("%d%d%d", &l1.ADDR, &l1.DATA, &l1.NEXT);

		v1[l1.ADDR] = l1;
	}

	if (fa == -1)
	{
		//cout << -1;
		printf("-1\n");
	}
	else
	{
		int nextaddr = fa;
		while (nextaddr != -1)
		{
			v2.push_back(v1[nextaddr]);
			nextaddr = v1[nextaddr].NEXT;
		}
	}

	int N2 = v2.size();
	int border = k - 1;
	while (border < N2)
	{
		for (int i = border; i > border - k; i--)
		{
			v3.push_back(v2[i]);
		}
		border += k;
	}
	for (int i = border - k + 1; i < N2; i++)
	{
		v3.push_back(v2[i]);
	}

	for (int i = 0; i < v3.size() - 1; i++)
	{
		v3[i].NEXT = v3[i + 1].ADDR;
		//cout << setfill('0') << setw(5) << v3[i].ADDR << " " << v3[i].DATA << " " << setfill('0') << setw(5) << v3[i].NEXT << endl;
		printf("%05d %d %05d\n",v3[i].ADDR,v3[i].DATA,v3[i].NEXT);

	}

	//cout << setfill('0') << setw(5) << v3[N2 - 1].ADDR << " " << v3[N2 - 1].DATA << " " << -1;
	printf("%05d %d %d\n", v3[N2-1].ADDR, v3[N2 - 1].DATA,-1);
	system("pause");
	return 0;
}
