#include<iostream>
#include<algorithm>
using namespace std;
int n;
void insort(int a[], int b[]) {
	int key = 0;          //��ƥ�䵽�м�����ʱ��key��1���´����������������������
	for (int i = 2; i <= n; i++) {		//����������ʼΪ2������Ϊn��������Ե�2��ͨ��
		sort(a, a + i);
		if (key) {
			cout << "Insertion Sort" << endl;
			cout << a[0];
			for (int j = 1; j < n; j++)
				cout << " " << a[j];
			return;
		}
		if (equal(a, a + n, b))  //equal��һ���Ƚ�����ĺ���
			key = 1;
	}
}
void mesort(int a[], int b[]) {
	int key = 0;
	for (int i = 2;; i *= 2) {   //���ﲻ����������������Ϊ��i>nʱ��Ҫ����һ������
		for (int j = 0; j < n; j += i) {
			sort(a + j, a + (j + i < n ? j + i : n));  //ע��ȷ���߽�
		}
		if (key) {
			cout << "Merge Sort" << endl;
			cout << a[0];
			for (int j = 1; j < n; j++)
				cout << " " << a[j];
			return;
		}
		if (equal(a, a + n, b))
			key = 1;
		if (i > n)
			break;

	}
}
int main() {
	cin >> n;
	int a1[100], a2[100], b[100];
	for (int i = 0; i < n; i++) {
		cin >> a1[i];
		a2[i] = a1[i];
	}
	for (int i = 0; i < n; i++)
		cin >> b[i];
	insort(a2, b);
	mesort(a1, b);
	return 0;
}
