#include<iostream>
#include<string>
using namespace std;

int main() {
	string text, p;

	cin >> text >> p;

	text += text;

	cout << (text.find(p) == string::npos ? "No" : "Yes") << endl;
}