#include<cstdio>
#include<iostream>
using namespace std;
#define a (x+1)
int x = 2;
void b() {
	x = a;
	printf("%d\n", x);
}
void c() {
	x = 1;
	printf("%d\n", a);
}
void main() {
	b();
	c();
}
