//20/20
#include<cstdio>
#include<set>
using namespace std;

int N, x;
set<int> st;

int main() {
	scanf("%d", &N);
	for (int i =1; i <= N; i++)
	{
		x = i / 2 + i / 3 + i / 5;
		st.insert(x);
	}
	printf("%d", st.size());
	return 0;
}