#include<iostream>
using namespace std;

int main() {
	int sec, h, m, s;
	cin >> sec;
	s = sec % 60;
	sec /= 60;
	m = sec % 60;
	sec /= 60;
	h = sec % 60;
	cout << h << ":" << m << ":" << s << endl;
}