#include<iostream>
using namespace std;

void fn(int n) {
	int x;
	cin >> x;
	if (--n > 0) fn(n);
	if (n > 0) cout << " ";
	cout << x;
}

int main() {
	int n;
	cin >> n;
	fn(n);
	cout << endl;
}